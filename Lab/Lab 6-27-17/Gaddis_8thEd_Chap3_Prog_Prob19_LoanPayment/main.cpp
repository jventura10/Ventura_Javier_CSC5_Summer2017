/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 27, 2017, 12:26 PM
 * Purpose: Calculate monthly payment of loan with interest
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //For the power functions
#include <iomanip>   //For input output manipulation

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int CNVMPYR=12; //12 months per year
const int CNVPERC=100; //conversion to percent

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float amtLoan,intRate,pymnt; //Loan Amount,monthly payment and interest rate
    int nCPer;
    float totPay;
    float totInt;
    
    //Initialize variables
    amtLoan=1e4f; //$10,000
    intRate=1.2e1f; //12 percent per year
    nCPer=36; //36 months
    
    //Input Data
    intRate/=(CNVMPYR*CNVPERC); //1/12 for months and 1/100 for decimal interest
    
    
    //Map inputs to outputs or process the data
    float temp=pow(1+intRate,nCPer); //(1+r)^n)
    pymnt=intRate*temp*amtLoan/(temp-1); //(r*(1+r)^n)*L/((1+r)*n-1)
    pymnt=static_cast<int>(pymnt*100)/100.0f; //Convert to pennies and back
    totPay=pymnt*nCPer;
    totInt=totPay-amtLoan;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount = $"<<amtLoan<<endl;
    cout<<"Interest Rate = "<<intRate*CNVPERC<<"%/month"<<endl;
    cout<<"Number of Compounding Periods = "<<nCPer<<" months"<<endl;
    cout<<"Monthly Payment = $"<<pymnt<<endl;
    cout<<"Total Amount Pay = $"<<totPay<<endl;
    cout<<"Total Interest Paid = $"<<totInt<<endl;
   
    //Exit stage right!
    
    return 0;
}
