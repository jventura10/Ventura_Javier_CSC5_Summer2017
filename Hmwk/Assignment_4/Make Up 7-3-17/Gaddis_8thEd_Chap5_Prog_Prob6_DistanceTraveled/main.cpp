/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Total Distance Traveled per hour
 * Created on July 9, 2017, 8:38 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float speed,time,dist; //distance=speed*time according to book;

    //Prompt For Data
    cout<<"Program calculates the distance traveled per hour."<<endl;
    cout<<"Please enter the speed of the object in miles per hour."<<endl;
    cin>>speed;
    cout<<"Please enter the time traveled, in hours."<<endl;
    cin>>time;
    
    //Input Validation
    if(speed<1 || time<1){
        cout<<"ERROR! Please re-run and enter valid numbers."<<endl;
    }
    
    //Start Table
    cout<<"Hour(s)        Distance Traveled"<<endl;
    cout<<"-------        -----------------"<<endl;
    
    //Set Loop
    for(int hour=1;hour<=time;hour++){
        dist=speed*hour;
        cout<<"   "<<hour<<"                "<<dist<<" Miles"<<endl;
    }
    
    return 0;
}

