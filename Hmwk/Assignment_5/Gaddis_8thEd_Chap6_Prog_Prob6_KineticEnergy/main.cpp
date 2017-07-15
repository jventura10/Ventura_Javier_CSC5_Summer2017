/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Display Kinetic Energy
 * Created on July 10, 2017, 9:48 PM
 */

#include <iostream>

using namespace std;

//Function Prototypes
float kinEn(float,float);

int main(int argc, char** argv){
    //Declare Variables
    float mass=0;   //Mass in kg
    float vel=0;    //Velocity m/s
    float kinE;     //Kinetic Energy
    
    //Prompt For Data
    cout<<"Given mass and velocity, Kinetic Energy will be displayed."<<endl;
    cout<<"Please enter mass, in kg."<<endl;
    cin>>mass;
    cout<<"Please enter velocity in meters per second."<<endl;
    cin>>vel;
    
    //Call Function
    kinE=kinEn(mass,vel);
    
    //Outputting Distance 
    cout<<"Kinetic Energy."<<kinE<<endl;
    
    
    return 0;
}

float kinEn(float m,float v){
    float kE;
    kE=(.5*m*v*v);
    return kE;
}

