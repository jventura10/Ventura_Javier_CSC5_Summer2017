/* 
 * File:   main.cpp
 * Author: Javier Ventura 
 * Created on June 22, 2017, 1:30 PM
 * Purpose:  Calculate Paycheck 
 */

//System Libraries

#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    
    //Declare variables
    float payRate; //Pay Rate
    float hrsWrkd; //Hours worked 
    float strtPay; //Straight time pay in hours
    float ovrTime; //Where overtime starts in hours
    float ovrFact; //Overtime factor
    float ovrPay; //Over Time Pay
    float totPay; //Total Pay
    
    
    //Initialize variables
    payRate=10.0f;
    hrsWrkd=41.0f;
    ovrTime=40.0f; //Full Time =40 hours
    ovrFact=1.5f; //Time and a half
            
   
    //Map inputs to outputs or process the data
    strtPay=hrsWrkd*payRate;
    ovrPay=(hrsWrkd>=ovrTime?(hrsWrkd-ovrTime)*payRate*(ovrFact-1):0);
    totPay=strtPay+ovrPay;
    
    //Output the transformed data
    cout<<"Straight time pay = $"<<strtPay<<endl;
    cout<<"Over time pay   = $"<<ovrPay<<endl;
    cout<<"The total pay paycheck = $"<<totPay<<endl;
    
    
    //Exit stage right!
    
    return 0;
}
