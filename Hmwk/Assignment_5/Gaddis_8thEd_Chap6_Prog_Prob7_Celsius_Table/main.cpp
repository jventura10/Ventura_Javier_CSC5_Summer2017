/*
 * File:   main.cpp
 * Author: Javier Ventura 
 * Purpose: Creates Temperatures Table from 0-20 in F to C
 * Created on July 15, 2017, 5:01 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes
float celsius(float);

int main(int argc, char** argv) {
    //Declare Variables
    float fTemp=0;        //Fahrenheit Temperatures from 0-20
    float cTemp;          //Celsius Temperatures converted from Fahrenheit
    
    //Create Table
    cout<<"Celsius Temperature Table"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Fahrenheit ---->  Celsius"<<endl;
    cout<<"-------------------------"<<endl;
    
    //Call Function
    for(int j=0;j<=20;j++){
        cTemp=celsius(fTemp);
        cout<<fixed<<setprecision(4)<<showpoint;
        cout<<fTemp++<<setw(18)<<cTemp<<endl;
    }

    return 0;
}

//******************************************************************************
//******************************************************************************
//                               Celsius                                      **
//Inputs:                                                                     ** 
//   F  ->  Fahrenheit Temperatures                                           **
//Output:                                                                     **   
//    C -> Celsius Temperatures                                               **
//******************************************************************************
//******************************************************************************

float celsius(float F){
    float C;
    C=((5.0/9.0)*(F-32.0));
    return C;
}