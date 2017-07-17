/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Simulates Coin Toss
 * Created on July 15, 2017, 5:45 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//Function Prototypes
int cToss(int);

int main(int argc, char** argv) {
    
    //Declare Variables
    unsigned int nTimes;  //Number of times user wants to flip the coin
    unsigned int nTails=0,nHeads=0; //Number of heads and tails
    int result;                //The result of toss either 1 or 2
    int flip;             //Argument for cToss 
 
    
    //Prompt User for Number of Coin Tosses
    cout<<"How Many Times do You Want to flip the Coin?"<<endl;
    cin>>nTimes;
    
    //Set Loop
    for(unsigned int v=1;v<=nTimes;v++){
        result=cToss(flip);
        if(result==1){
            nHeads++;
        }
        else if(result==2){
            nTails++;
        }
    }
    
    //Output Data
    cout<<endl;
    cout<<"Total Number of Heads: "<<nHeads<<endl;
    cout<<endl;
    cout<<"Total Number of Tails: "<<nTails<<endl;

    return 0;
}

//******************************************************************************
//******************************************************************************
//                                 Coin Toss                                  **
//Inputs:                                                                     **
//    None -> Time is set and coin tosses occur                               **
//Output:                                                                     **   
//    Toss -> The toss of the coin                                            **
//******************************************************************************
//******************************************************************************

int cToss(int toss){
    //Randomize Toss
    toss=rand()%2+1;    //[1,2]
    if(toss==1){
        cout<<"Heads"<<endl;
    }
    else{
        cout<<"Tails"<<endl;
    }
    return toss;
}