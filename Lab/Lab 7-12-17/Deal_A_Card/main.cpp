/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on July 12, 2017, 1:05 PM
 * Purpose:  Deal a card
 * 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Number Library
#include <ctime>     //  Time Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
char suit(char);
char face(char);

//Execution begins here
int main(int argc, char** argv) {
   //set the random
    srand(static_cast<unsigned int>(time(0)));
    
     //Declare variables
    char card=rand()%52+1;
    cout<<"Random Card "<<endl;
    cout<<"Card = "<<static_cast<int>(card)
                <<" -> "<<face(card)<<suit(card)<<endl<<endl;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"All the Cards"<<endl;
    for(char card=1;card<52;card++){
        cout<<"Card = "<<static_cast<int>(card)
                <<" -> "<<face(card)<<suit(card)<<endl;
    }
        
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
char face(char card){
    switch(card%13){
        case 1:return 'A';
        case 2:return '2';
        case 3:return '3';
        case 4:return '4';
        case 5:return '5';
        case 6:return '6';
        case 7:return '7';
        case 8:return '8';
        case 9:return '9';
        case 10:return 'T';
        case 11:return 'J';
        case 12:return 'Q';
        default:return 'K';
    }
}

char suit(char card){
    if(card<=13)return 'S';//S for Spades
    if(card<=26)return 'D';//D for Diamond
    if(card<=39)return 'C';//C for Clubs
    return 'H';//H for Heart
}