/* 
 * File:   main.cpp
 * Author: Jay
 * Purpose: Taking mass in kg and turning it to weight in Newtons.
 * Created on July 3, 2017, 6:22 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float weight,mass; //USed in formula, float range [0,2,000,000]
    
    //Prompt for Data
    cout<<"This program takes mass, in kg, and converts ";
    cout<<"it to weight in newtons."<<endl;
    cout<<"Please Enter Mass in kg. Press enter when done."<<endl;
    cin>>mass;
    
    //Process Data 
    weight=mass*9.80;
    
    //Set Conditional Statements to Output Data
    if(weight>=1000)
    {
        cout<<"Your weight is "<<weight<<" newtons."<<endl;
        cout<<"Wow that is too heavy!"<<endl;
    }
    else if(weight<=10)
    {
        cout<<"Your weight is "<<weight<<" newtons."<<endl;
        cout<<"Wow that is too light!"<<endl;
    }
    else
        cout<<"Your weight is "<<weight<<" newtons"<<endl;

    return 0;
}

