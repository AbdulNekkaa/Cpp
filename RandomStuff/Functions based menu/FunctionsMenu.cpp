/*
________  ________  ________  ___  ___  ___          
|\   __  \|\   __  \|\   ___ \|\  \|\  \|\  \         
\ \  \|\  \ \  \|\ /\ \  \_|\ \ \  \\\  \ \  \        
 \ \   __  \ \   __  \ \  \ \\ \ \  \\\  \ \  \       
  \ \  \ \  \ \  \|\  \ \  \_\\ \ \  \\\  \ \  \____  
   \ \__\ \__\ \_______\ \_______\ \_______\ \_______\
    \|__|\|__|\|_______|\|_______|\|_______|\|_______|                                                   
    MENU FUNCTIONS:
    A code that lets the user choose how his array data gets manipulated through a menu.
*/
#include <iostream>
using namespace std;

bool program_play = true;           //Global bool variable used to stop the program's loop only if the user wants to.

//Functions:
//Sum of array:
int sum(int numbas[5]){                      //int, a function that HAS a return value, this is because we want to return the total value when we call the function 'sum()'.
    int total = 0;

    for(int i = 0; i<5; i++){
        total += numbas[i];
    }
    return total;
}
//Maximum Finder:
int max(int numbas[5]){
    int maximum_found;
    maximum_found = numbas[0];

    for(int i = 1; i < 5; i++){
        if(numbas[i] > maximum_found){
            maximum_found = numbas[i];
        }
    }
    return maximum_found;
}
//Average calculator:
float avrg(int numbas[5]){                   //We use a float function here because the value we want to return has to be float.
    float total = 0;
    float average = 0;
    
    for(int i = 0; i<5; i++){
        total += numbas[i];
    }
    average = total/5.00;
    return average;
}
//Exit function:
void endProgram(){            //Void, a function that has NO return value, in this case it just turns the global variable to false
    program_play = false;
}
//After we finish declaring our functions we make the main function that basically: 1. asks for user's input, 2. shows the menu afterwards with the avaiable options, 3 etc...
//Main function:
int main(){
    while(program_play == true){            //Loop used to use the program again if the user didn't choose th 'exit' option.
        int numbas[5];
        int decision;
        float result;

        cout<<"Welcome to this array multi functional program."<<endl<<"Insert your array numbers below here:"<<endl;

        for(int i = 0; i<5; i++){
            cin>>numbas[i];
        }

        cout<<"MENU FUNCTIONS:"<<endl<<"1 - Sum of your array,"<<endl<<"2 - Maximum number of your array,"<<endl<<"3 - Avearage of your array,"<<endl<<"4 - Exit"<<endl;
        cin>>decision;
        
        //This switch case basically checks what the user asked before and activates the corresponding case:
        switch (decision){
            case 1:
                result = sum(numbas);
                cout<<"The sum of your array = "<<result<<endl;
                break;
            case 2:
                result = max(numbas);
                cout<<"The biggest number of your array = "<<result<<endl;
                break;
            case 3:
                result = avrg(numbas);
                cout<<"The avearage of your array = "<<result<<endl;
                break;
            case 4:
                endProgram();
                break;
            default:
                break;
        }
    }
}