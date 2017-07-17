/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 21, 2017, 1:27 PM
 * Purpose: Land Calculations
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float CNVFTA=43560.0f; //43560 feet/acre
const float CNVFTM=5280.0f; //5280 feet/Mile

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float inSqFt,inAcres; //Distance in square feet and in acres
    float nAcres,nSqMls; //Number of acres and square miles
    
   
    //Input data
    cout<<"Input the number of square feet and Acres to convert"<<endl;
    cin>>inSqFt>>inAcres;
    
    //Process for Output
    nAcres=inSqFt/CNVFTA;
    nSqMls=inAcres*CNVFTA/CNVFTM/CNVFTM;
    
    //Output the transformed data
    cout<<inSqFt<<" feet = "<<nAcres<<" Acres"<<endl;
    cout<<inAcres<<" acres = "<<nSqMls<<" Miles"<<endl;
    
   
    //Exit stage right!
    return 0;
}

