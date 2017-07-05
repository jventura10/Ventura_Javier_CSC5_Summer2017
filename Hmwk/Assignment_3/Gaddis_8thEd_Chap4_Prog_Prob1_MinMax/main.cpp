/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: This program compares two numbers to see which is greater
 * Created on July 1, 2017, 2:04 PM
 */

#include <iostream> 

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float num1,num2;  //The two numbers that the user inputs,to compare,floats
    
    //Prompt for two numbers
    cout<<"Enter two integers, no commas, press enter after each."<<endl;    
    cin>>num1>>num2;
    
    //Set the conditional operator
    if(num1>num2)
    { cout<<num1<<" is greater than "<<num2<<"."<<endl;
    }
    if(num2>num1)
    {cout<<num2<<" is greater than "<<num1<<"."<<endl;
    }
    
    return 0;
}

