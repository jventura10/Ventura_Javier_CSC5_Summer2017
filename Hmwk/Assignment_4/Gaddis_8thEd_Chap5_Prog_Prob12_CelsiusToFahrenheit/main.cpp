/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Make a table with 0-20 Celsius temps and fahrenheit equivalents
 * Created on July 9, 2017, 1:12 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float degC;
    float degF;
 
    cout<<"Degrees Celsius       Degrees Fahrenheit"<<endl;
    cout<<"---------------       ------------------"<<endl;
    //Set Loop
    for(degC=0;degC<=20;degC++){
        degF=((9.0f * degC)/5.0f)+32.0f;
        cout<<"      "<<degC<<"                     "<<degF<<endl;
    }
   
    return 0;
}

