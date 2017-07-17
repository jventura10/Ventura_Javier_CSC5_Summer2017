/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose; Program converts degrees Celsius to Fahrenheit
 * Created on June 28, 2017, 12:58 PM
 */

//System Libraries 
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    float degC;
    float degF;
    
    //Prompt or Input Data
    cout<<"This Program converts degrees Celsius to Fahrenheit. "<<endl;
    cout<<"Please Enter the degrees Celsius.  ";
    cin>>degC;
    
    //Process Data
    degF=((9.0f * degC)/5.0f)+32.0f;
    
    //Output data
    cout<<degC<<" Degrees Celsius is equal to "<<degF<<" Degrees Fahrenheit";
    cout<<endl;
           
    
    

    return 0;
}

