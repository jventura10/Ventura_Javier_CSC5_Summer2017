/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 21, 2017, 12:47 PM
 * Purpose:  Calculating Pocket Change
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
    short nQts,nDms,nNks; //NUmber of Quarters,Dimes and Nickels [0,32767]
    short pcktChg; //Number of cents in your pocket
    char vQtr=25,vDm=10,vNk=5; //Value of a Quarter,Dime,Nickel
    
   
    
    //Input data
    cout<<"This program calculates your pocket change"<<endl;
    cout<<"Input the number of Quarters, Dimes, and Nickels"<<endl;
    cout<<"Inputs are limited to 32467 coins apiece"<<endl;
    cin>>nQts>>nDms>>nNks;  
    
    //Map inputs to outputs or process the data
    //Remember nQts,nDms, nNks are characters not integers,hold different values
    pcktChg=nQts*vQtr+nDms*vDm+nNks*vNk;
    
    //Output the transformed data
    cout<<nQts<<" Quarters + ";
    cout<<nDms<<" Dimes + ";
    cout<<nNks<<" Nickels = ";
    cout<<pcktChg<<" Cents or ";
    cout<<pcktChg/100.0f<<(pcktChg%10==0?'0':' ')<<" Dollars"<<endl;
    
    //Exit stage right!
    return 0;
}

