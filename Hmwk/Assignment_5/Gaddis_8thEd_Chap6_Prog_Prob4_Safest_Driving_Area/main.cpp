/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Shows Which Area is the Safest to Drive in
 * Created on July 16, 2017, 12:56 PM
 */

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

//Function Prototypes
float nAcc(string);
void fLow(int,int,int,int,int);   

int main(int argc, char** argv) {
    //Declare Variables
    int accS,accN,accE,accW,accCe; //Sales for each Division
    
    //Purpose
    cout<<"Do you Want to know the Safest Area For Driving in your city?"<<endl;
    
    //Call Function
    accS=nAcc("South");
    accN=nAcc("North");
    accE=nAcc("East");
    accW=nAcc("West");
    accCe=nAcc("Central");
    fLow(accS,accN,accE,accW,accCe);

    return 0;
}

//******************************************************************************
//******************************************************************************
//                              Number of Accidents                           **
//Inputs:                                                                     ** 
//   nArea -> Area within Major city                                          **
//   rAcc -> Reported Accidents in that Area                                  **
//Output:                                                                     **   
//   rAcc -> Reported Accidents in that Area                                  **
//******************************************************************************
//******************************************************************************

float nAcc(string nArea){
    int rAcc;
    while(true){
        cout<<"Enter the Number of Reported Accidents for last year in the";
        cout<<" Areas, in the order: South,North,East,West,Central"<<endl;
        cin>>rAcc;
        if(rAcc<0){
            cout<<endl;
            cout<<"Number of accidents must be a positive number.";
            cout<<"Terminate Program and Re-Run."<<endl;
        }
        else{
            break;
        }
    }
    return rAcc;
}

//******************************************************************************
//******************************************************************************
//                              Find Lowest                                   **
//Inputs:                                                                     ** 
//   qSE -> Quarterly Sales for Southeast                                     **
//   qNE -> Quarterly Sales for Northeast                                     **
//   qSW -> Quarterly Sales for Southwest                                     **
//   qNW -> Quarterly Sales for Northwest                                     **
//Output:                                                                     **   
//  qSE,qNE,qSW,qNW -> Division with highest sales and their dollar amount    **
//******************************************************************************
//******************************************************************************

void fLow(int S,int N,int E,int W,int Ce){
    if(S <= N && S <= E && S <= W && S <= Ce){
        cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'South' Area";
        cout<<" with "<<S<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
    if(N <= S && N <= E && N <= W && N <= Ce){
      cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'North' Area";
        cout<<" with "<<N<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
    if(E <= N && E <= S && E <= W && E <= Ce){
       cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'East' Area";
        cout<<" with "<<E<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
    if(W <= N && W <= E && W <= S && W <= Ce){
        cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'West' Area";
        cout<<" with "<<W<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
    if(Ce <= N && Ce <= E && Ce <= W && Ce <= S){
        cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'Central' Area";
        cout<<" with "<<Ce<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
}
