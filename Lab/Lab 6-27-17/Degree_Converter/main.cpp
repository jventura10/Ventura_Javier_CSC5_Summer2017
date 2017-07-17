/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: TO change between Degrees Celsius and Fahrenheit
 * Created on June 27, 2017, 1:26 PM
 */

//System Libraries 
#include <iostream>


using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    float degC;
    float degF1;
    float degF2;
    
    //Prompt or Input Data
    cout<<"This Program converts degrees Fahrenheit to Celsius. "<<endl;
    cout<<"Please Enter the degrees Fahrenheit.";
    cin>>degF1;
    
    //Process Data
    degC=(5.0f *(degF1-32.0f))/9.0f;
    degF2=((9.0f * degC)/5.0f)+32.0f;
    
    //Output data
    cout<<degF1<<" Degrees Fahrenheit is equal to "<<degC<<" Degrees Celsius"
            " and converts back to "<<degF2<<" Degrees Fahrenheit."<<endl;
    

    return 0;
}

