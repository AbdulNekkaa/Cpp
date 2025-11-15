/*
________  ________  ________  ___  ___  ___          
|\   __  \|\   __  \|\   ___ \|\  \|\  \|\  \         
\ \  \|\  \ \  \|\ /\ \  \_|\ \ \  \\\  \ \  \        
 \ \   __  \ \   __  \ \  \ \\ \ \  \\\  \ \  \       
  \ \  \ \  \ \  \|\  \ \  \_\\ \ \  \\\  \ \  \____  
   \ \__\ \__\ \_______\ \_______\ \_______\ \_______\
    \|__|\|__|\|_______|\|_______|\|_______|\|_______|                                                   
    CUSTOM TREE:
    An ASCII tree because.... why not?
*/
#include <iostream>
using namespace std;

int main(){
    //Variables:
    int input_n;
    char leaves;
    char log;

    //Output&Input:
    cout<<"This program will generate a customizable 'Christmas' Tree."<<endl<<"Insert a number:"<<endl;
    cin>>input_n;
    cout<<"Type in what ASCII character use for the leaves:"<<endl;
    cin>>leaves;
    cout<<"Type in what ASCII character use for the log"<<endl;
    cin>>log;

    //Generation of the leaves:
    for(int i = 1; i <= input_n; i++){                     //We use 3 loops here, 1 for the height, 1 for spaces and 1 for the leaves.
        for(int a = 1; a <= input_n-i; a++){
            cout<<" ";
        }
        for(int j = 1; j <= 2*i-1; j++){
            cout<<leaves;
        }
        cout<<endl;
    }
    //Generation of the log:
    for(int k = 1; k<= 2; k++){                   //We use only 2 loops here to make the log, one prints the spaces and the other prints the log and goes to the next line.
        for(int i = 1; i< input_n; i++){
            cout<<" ";
        }
    cout<<log<<endl;
    }
}