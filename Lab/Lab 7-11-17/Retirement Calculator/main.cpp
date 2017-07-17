/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on July 11, 2017, 12:38 PM
 * Purpose: Retirement Calculator
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Libray
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int CNVPERC=100;//Conversion to Percentage

//Function Prototypes
float retire(float,float,int,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float  pv,    //Present Value in dollars
            i,    //Investment Rate ->Municipal Bonds
       salary,    //Yearly Salary
        yrDep,    //Yearly Deposit amount
      savReqd;    //Savings Required
    
    
    //Input data
    cout<<"This is a Retirement Account Program"<<endl;
    cout<<"Input Present Value of Savings in Dollars, "<<endl;
    cout<<"Investment Rate in percent / year,"<<endl;
    cout<<"Expected Salary at peak Earnings"<<endl;
    cout<<"Percentage Salary saved / year for Retirement"<<endl;
    cin>>pv>>i>>salary>>yrDep;
    
    //Map the inputs
    i/=CNVPERC;//Convert percentage interest to fraction
    yrDep=salary*yrDep/CNVPERC;//Convert to Dollars saved / years
    savReqd=salary/i;
    
    //Output the inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl;
    cout<<"The Present Value  = $"<<setw(8)<<pv<<endl;
    cout<<"The InvestmentRate =  "<<setw(8)<<i*CNVPERC<<"%"<<endl;
    cout<<"The Expected Salary= $"<<setw(8)<<salary<<endl;
    cout<<"The Yearly Deposit = $"<<setw(8)<<yrDep<<endl;
    cout<<"Savings Required   = $"<<setw(8)<<savReqd<<endl;
    
    //Output the transformed data
    for(float year=1,savings=0;savings<savReqd;year++){
        savings=retire(pv,i,year,yrDep);
        cout<<"Year "<<year<<" = $"<<savings<<endl;
    }
     
    //Exit stage right!
    return 0;
}

//000000011111112222222333333344444445555555666666677777778888888999999900000000
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//             Retirement Savings
//Inputs:
//   pVal->Present Value $'s
//   intRate ->Interest Rate as a fraction
//   nPds -> NUmber of Compounding Periods (yrs)
//   yDep-> Yearly Deposit
//Output:
//   Future Value -> Units of $'s
//000000011111112222222333333344444445555555666666677777778888888999999900000000
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float retire (float pVal,float intRate,int nPds,float yDep){
    float fv=pVal;
    for(int i=1;i<=nPds;i++){
        fv*=(1+intRate);
        fv+=yDep;
    }
     return fv;
}