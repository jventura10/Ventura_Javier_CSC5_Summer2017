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
    char nQts,nDms,nNks; //NUmber of Quarters,Dimes and Nickels
    short pcktChg; //Number of cents in your pocket
    char vQtr=25,vDm=10,vNk=5; //Value of a Quarter,Dime,Nickel
    
   
    
    //Input data
    cout<<"This program calculates your pocket change"<<endl;
    cout<<"Input the number of Quarters, Dimes, and Nickels"<<endl;
    cout<<"Inputs are limited to 9 coins apiece"<<endl;
    cin>>nQts>>nDms>>nNks;  
    
    //Map inputs to outputs or process the data
    //Remember nQts,nDms, nNks are characters not integers,hold different values
    pcktChg=(nQts-48)*vQtr+(nDms-48)*vDm+(nNks-48)*vNk;
    
    //Output the transformed data
    cout<<nQts<<" Quarters + ";
    cout<<nDms<<" Dimes + ";
    cout<<nNks<<" Nickels = ";
    cout<<pcktChg<<" Cents"<<endl;
    
    //Exit stage right!
    return 0;
}

