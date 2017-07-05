/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: This Program calculates estimated miles per gallon of a car 
 * Created on June 26, 2017, 9:35 PM
 */

//Include System Libraries
#include <iostream>

using namespace std;

int main(int argc, char** argv){

 

    //Declare Variables

    float numGal;      //Number of gallons that the car can hold
    float numMil;      //Number of miles that the car drives with 1 full tank
    float milpGal;     //Miles per gallon the car uses

    //Prompt for Data
    cout<<"This Program calculates the miles per gallon of your car."<<endl;
    cout<<"Please enter the number of gallons of gas your car can hold."
            <<endl; //Tank size Gallons
    cin>>numGal;
    cout<<"Please enter the number of miles your car can drive from a "
          "full tank of gas."<<endl;
    cin>>numMil;
    
    //Process Data
    milpGal=numMil/numGal; 

    //Output Data
    cout<<"Your car has an estimated "<<milpGal
            <<" Miles Per Gallon usage"<<endl;

    return 0;

    //Exit 

}



