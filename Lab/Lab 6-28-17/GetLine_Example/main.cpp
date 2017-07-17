/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Javier Ventura
 *
 * Created on June 28, 2017, 3:16 PM
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string.h>  //String library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=20;
    char month[SIZE];
    
    //Initialize variables
    
    //Input data
    cout<<"Input a month"<<endl;
    cin.getline(month,SIZE);
    
    //Map inputs to outputs or process the data
    cout<<"The month you choose was "<<month<<endl;
    
    //Output the transformed data
    if(!strcmp(month,"January"))cout<<"It matches January"<<endl;
    else cout<<"It doesn't match January"<<endl;
    
    //Exit stage right!
    return 0;
}
