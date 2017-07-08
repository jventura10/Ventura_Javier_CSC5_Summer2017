/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Plays random number guessing game.
 * Created on July 8, 2017, 1:09 AM
 */

#include <iostream> 
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<int>(time(0)));
    
    //Declare Variables
    int guess;            //The guess of the user of what the number is.
    unsigned int actNum; //The actual number that is random from 1 to 999.
    
    //Randomize Number
    actNum=rand()%1000+1; //[1,999]
    
    //Set Loop
    cout<<"Guess a Number between 1 and 999.Press enter after guess."<<endl;
    do{
        cin>>guess;
        if(guess<actNum){
            cout<<"Too low, try again."<<endl;
        }
        if(guess>actNum){
            cout<<"Too high, try again."<<endl;
        }
        if(guess == actNum){
            cout<<"Congratulations! You are right!!"<<endl;
            break;
        }
    }while(guess!=actNum);

    return 0;
}

