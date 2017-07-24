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
    //Numbers the problem says to store
    unsigned int tickets[10]= { 13579, 26791, 26792, 33445, 55555,
                                62483, 77777, 79422, 85647, 93121};
    unsigned int winning; //Winning Numbers
    
    //Prompt
    cout<<"Enter this week's winning number: ";
    cin>>winning;
    
    //Search Through player's tickets to see if they have winning #
    //Using Binary Search 
    int min_index =0, max_index = NUM_TIX-1;
    int index;
    bool won = false;
    do{
        index = (max_index - min_index)/2.0 + min_index;
        if(tickets[index]>winning){
            max_index=index;
        }
        else if(tickets[index]<winning){
            min_index=index;
        }
        else if(tickets[index] == winning){
            won= true;
        }   
    }while(max_index > (min_index) && !won);
    
    if(won){
        cout<<"You are a Winner";
    }
    else{
        cout<<"You are not a Winner, Sorry";
    }
    
    return 0;
}

