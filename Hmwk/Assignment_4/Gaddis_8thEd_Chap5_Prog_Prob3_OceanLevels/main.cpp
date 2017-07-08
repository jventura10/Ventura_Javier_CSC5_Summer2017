/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Display the increase of Ocean Levels in the next 25 years.
 * Created on July 5, 2017, 10:21 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int year=1;     //Starts at 1 ends at 25, represents the years ocean levels rise
    float ocnLvl=1.5f; //The number of millimeters the ocean level rises a year 
    
    //Display Purpose
    cout<<"This Program displays the increase in ocean levels ";
    cout<<"in the next 25 years."<<endl;
            
    //Create Loop 
    for(ocnLvl=1.5; ocnLvl<=37.5; ocnLvl += 1.5){
        cout<<"In "<<year<<" year(s) the ocean level ";
        cout<<"will have risen "<<ocnLvl<<" millimeters."<<endl;
        year++;
    }
   
    
    

    return 0;
}

