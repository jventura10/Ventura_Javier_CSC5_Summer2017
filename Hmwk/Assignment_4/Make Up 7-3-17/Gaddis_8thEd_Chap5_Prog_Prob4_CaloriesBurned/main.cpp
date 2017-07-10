/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Calories Burned
 * Created on July 9, 2017, 7:43 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float calBur=3.6; //Every Minute 3.6 calories burned
    float totCal=0; //Total Calories Burned
    int time=0;  //Time running
    
    //Process Data
    cout<<"This Program calculates the calories burned, every 5 minutes,";
    cout<<"running on the treadmill."<<endl;
    
    //Set Loop
    for(totCal=0;totCal<=108;totCal+=calBur){
        time++;
        if(totCal=18){
            cout<<"After 5 minutes the calories burned is "<<totCal<<endl;
        }
        if(totCal=36){
            cout<<"After 10 minutes the calories burned is "<<totCal<<endl;
        }
        if(totCal=54){
            cout<<"After 15 minutes the calories burned is "<<totCal<<endl;
        }
        if(totCal=72){
            cout<<"After 20 minutes the calories burned is "<<totCal<<endl;
        }
        if(totCal=90){
            cout<<"After 25 minutes the calories burned is "<<totCal<<endl;
        }
        if(totCal=108){
            cout<<"After 30 minutes the calories burned is "<<totCal<<endl;
        }
    }

    return 0;
}

