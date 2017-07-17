/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on July 11, 2017, 11:48 AM
 * Purpose: Example Function Implementation
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
float fValue1 (float,float,int);//Power
float fValue2 (float,float,int);//Exp-Log
float fValue3 (float,float,int);//For-Loop
float fValue4 (float,float,int);//Recursion
int   fValue5 (float,float,int,float&);//Pass by Reference, Also Static Variable
float fValue1 (float,float,float);//Power Overridden using float Years
float fValue6 (float,float,int=12);//Power Defaulted Years
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float  pv,    //Present Value in dollars
            i;    //Interest rate Percent/compounding period
    int     n;    //Number of compounding periods (yrs) 
    
    //Input data
    cout<<"This is a Saving Account Program"<<endl;
    cout<<"Input Present Value in Dollars, "<<endl;
    cout<<"Interest Rate in percent / year,"<<endl;
    cout<<"Number of Compounding periods in years."<<endl;
    cin>>pv>>i>>n;
    
    //Map the inputs
    i/=CNVPERC;//Convert percentage interest to fraction
    
    //Output the inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl;
    cout<<"The Present Value = $"<<setw(8)<<pv<<endl;
    cout<<"The Interest Rate =  "<<setw(8)<<i*CNVPERC<<"%"<<endl;
    cout<<"The Number of Years ="<<setw(5)<<n<<endl;
    
    //Output the transformed data
    
    cout<<"Savings Function 1 -> Power      = $"
            <<fValue1(pv,i,n)<<endl;
    cout<<"Savings Function 1 -> Power float= $"
            <<fValue1(pv,i,static_cast<float>(n))<<endl;
    cout<<"Savings Function 2 -> Exp - Log  = $"
            <<fValue2(pv,i,n)<<endl;
    cout<<"Savings Function 3 -> For - Loop = $"
            <<fValue3(pv,i,n)<<endl;
    cout<<"Savings Function 4 -> Recursion  = $"
            <<fValue4(pv,i,n)<<endl;
    float fv;
    for (int j=1;j<=5;j++){
        cout<<"Number of Times Function 5 called = "<<fValue5(pv,i,n,fv)<<endl;
    }
    cout<<"Savings Function 5 -> Ref/Static   = $"
            <<fv<<endl;
    cout<<"Savings Function 6 -> Defaulted n=12 $"
            <<fValue6(pv,i,n)<<endl;
    cout<<"Savings Function 6 -> Defaulted n=12 $"
            <<fValue6(pv,i)<<endl;
    
    //Exit stage right!
    return 0;
}
//000000011111112222222333333344444445555555666666677777778888888999999900000000
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//             Future Value
//Inputs:
//   pVal->    Present Value $'s
//   intRate ->Interest Rate as a fraction
//   nPds -> Number of Compounding Periods (yrs)
//Output:
//   nTimes ->Number of times the function was called
//Input/Output
//   Future Value -> Units of $'s
//000000011111112222222333333344444445555555666666677777778888888999999900000000
//345678901234567890123456789012345678901234567890123456789012345678901234567890
int fValue5 (float pVal,float intRate,int nPds,float &fv){
    static int nTimes=0;
    
    //Calculate the Future Value
    fv=pVal*pow(1+intRate,nPds);
    
    //Return the count
    return ++nTimes;
}

//000000011111112222222333333344444445555555666666677777778888888999999900000000
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//             Future Value
//Inputs:
//   pVal->Present Value $'s
//   intRate ->Interest Rate as a fraction
//   nPds -> NUmber of Compounding Periods (yrs)
//Output:
//   Future Value -> Units of $'s
//000000011111112222222333333344444445555555666666677777778888888999999900000000
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float fValue6 (float pVal,float intRate,int nPds){
    return pVal*pow(1+intRate,nPds);
}
float fValue1 (float pVal,float intRate,int nPds){
    return pVal*pow(1+intRate,nPds);
}
float fValue1 (float pVal,float intRate,float nPds){
    return pVal*pow(1+intRate,nPds);
}

float fValue2 (float pVal,float intRate,int nPds){
    return pVal*exp(nPds*log(1+intRate));
}

float fValue3 (float pVal,float intRate,int nPds){
    float fv=pVal;
    for(int i=1;i<=nPds;i++){
        fv*=(1+intRate);
    }
     return fv;
}
float fValue4 (float pVal,float intRate,int nPds){
    if (nPds<=0)return pVal;
    return fValue4 (pVal,intRate,nPds-1)*(1+intRate);
   
}