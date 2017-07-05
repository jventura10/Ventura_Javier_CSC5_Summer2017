/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 21, 2017, 1:27 PM
 * Purpose: Land Calculations - Converts Units of distance
 */

//System Libraries
#include <iostream>  

using namespace std; //Name-space under which system libraries exist



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
    cout<<"Input the number of square feet and acres to convert."<<endl;
    cin>>inSqFt>>inAcres;
    
    //Process for Output
    nAcres=inSqFt/CNVFTA;
    nSqMls=inAcres*CNVFTA/CNVFTM/CNVFTM;
    
    //Output the transformed data
    cout<<inSqFt<<" feet = "<<nAcres<<" acres"<<endl;
    cout<<inAcres<<" acres = "<<nSqMls<<" miles"<<endl;
    
   
    //Exit stage right!
    return 0;
}

