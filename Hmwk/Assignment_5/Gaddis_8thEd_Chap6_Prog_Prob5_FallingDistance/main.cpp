/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Display Falling Distance from 1-10 seconds d=1/2 gt^2 
 * Created on July 10, 2017, 9:02 PM
 */

#include <iostream>

using namespace std;

//Function Prototypes
float fallD(int);

int main(int argc, char** argv) {
    //Declare Variables
    float dist;  //Distance object fell
    int timeF;   //Time for object to fall
    
    //Purpose
    cout<<"The distance an object falls at a certain time, in seconds,";
    cout<<" will be displayed."<<endl;
    
    //Set Loop
    for(timeF=1;timeF<=10;timeF++){
        dist=fallD(timeF);
        cout<<"Distance fallen at "<<timeF<<" second(s) is "<<dist<<" m."<<endl; 
    }

    return 0;
}

float fallD(int timeFa){
    float distFa;
    float grav=9.80f;
    distFa=static_cast<float>(.5*grav*timeFa*timeFa);
    return distFa;
}
