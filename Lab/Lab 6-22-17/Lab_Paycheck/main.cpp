/* 
 * File:   main.cpp
 * Author: Javier Ventura 
 * Created on June 22, 2017, 12:27 PM
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
    float rate,hours,pay; //the rate of pay in dollars and hours worked
    
   
    
    //Input data
    cout<<"How much hours did you work?";
    cin>>hours;
            
    cout<<"What is your rate of pay?";
    cin>>rate;
           
    //Map inputs to outputs or process the data
    pay= hours * rate; //paycheck is the hours worked times the rate of pay
    
    //Output the transformed data
    cout<<"Your paycheck comes out to: $"<<pay<<endl;
    
    //Exit 
    
    return 0;
}

