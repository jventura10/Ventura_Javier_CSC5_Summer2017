/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Largest/Smallest Array Values
 * Created on July 23, 2017, 8:12 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    const int SIZE=10; // Size of the array
    int small,large;  //The smallest and largest of the numbers
    int numAry[SIZE];  //Array holding the numbers
    
    //Prompt for Data
    cout<<"Enter ten positive numbers:"<<endl;
    for(int j=0;j<SIZE;j++){
        cin>>numAry[j];
    }
    
    small=numAry[0]; //Replace method for smallest number
    large=numAry[0];    //Replace method for largest number
    
    for(int i=0;i<SIZE;i++){
        if(numAry[i]>large){
            large=numAry[i];
        }
    }
    
    cout<<"The largest value is: "<<large<<endl;
    cout<<"The smallest value is: "<<small<<endl;

    return 0;
}

