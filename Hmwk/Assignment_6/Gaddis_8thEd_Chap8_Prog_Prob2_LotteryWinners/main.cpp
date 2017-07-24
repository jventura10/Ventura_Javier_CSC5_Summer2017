/*
 * File:   main.cpp
 * Author: rcc
 * Purpose: Lottery Winners
 * Created on July 20, 2017, 12:19 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    const int NUM_TIX=10;
    
    //Declare Variables
    //Numbers that the problem says to store 
    unsigned int tickets[10]= { 13579, 26791, 26792, 33445, 55555,
                                62483, 77777, 79422, 85647, 93121};
    unsigned int winning;       //Winning NUmber
    
    
    //Prompt
    cout<<"Enter this week's winning number: ";
    cin>>winning;
    
    //Search Through player's tickets to see if they have winning #
    //Using Linear Search
    bool won = false;
    for(int i=0; i<NUM_TIX;i++){
        if(tickets[i]== winning){
            cout<<"You are a Winner!"<<endl;
            won = true;
        }
    }
    
    
    if(won == false){
        cout<<"Sorry, You are not a Winner";
    }
    
    return 0;
}

