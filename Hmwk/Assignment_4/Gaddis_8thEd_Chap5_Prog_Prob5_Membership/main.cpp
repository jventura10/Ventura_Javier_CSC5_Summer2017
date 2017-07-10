/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Show the increase in rate for 6 years in country club.
 * Created on July 7, 2017, 11:07 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int year=1;      //Number of years 1-6
    float perInc=.04; //Percent fees will increase each year
    float totInc;  //Total amount fee will increase in dollars each year
    float annMem=2500; //0 year the membership is $2500

    //Display Purpose
    cout<<"The Current Annual Membership Fee at the country club is $2500. ";
    cout<<"After a 4% increase each year: ";
    cout<<endl;
    
    cout<<fixed<<setprecision(2)<<showpoint;
    for(annMem=2600;annMem<=3200; annMem += totInc){
        totInc=perInc*annMem;
        cout<<"In "<<year<<" year(s) the annual membership will be $"<<annMem;
        cout<<"."<<endl;
        year++;
    }

    return 0;
}

