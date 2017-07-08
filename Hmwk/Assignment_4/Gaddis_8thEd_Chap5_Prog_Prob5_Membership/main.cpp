/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Show the increase in rate for 6 years in country club.
 * Created on July 7, 2017, 11:07 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int year=1;      //Number of years 1-6
    float perInc=100.0f; //Percent fees will increase a year
    float annMem=2500;

    //Display Purpose
    cout<<"The Current Annual Membership Fee at the country club is $2500.";
    cout<<endl;
    
    for(annMem=2600;annMem<=3100; annMem += perInc){
        cout<<"In "<<year<<" year(s) the annual membership will be $"<<annMem;
        cout<<"."<<endl;
        year++;
    }

    return 0;
}

