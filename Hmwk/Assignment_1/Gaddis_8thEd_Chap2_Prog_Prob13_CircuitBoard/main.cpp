/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Program calculates actual price of Circuit Board 
 * Created on June 25, 2017, 12:59 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {

    //Declare Variables
    float cirBo=14.95f; //Circuit Board factory price in dollars
    float perPro=.35f; //Percent at which store sells for profit 
    float prfAdd;     //Dollars added to factory price to make profit
    float actPri;     //Actual Price that the Circuit Board is sold
    
 
    
    //Process Data
    prfAdd=cirBo*perPro;
    actPri=prfAdd+cirBo;
   
    //Output The Results
    cout<<"This Program calculates the actual price of a circuit board";
    cout<<" if the store is trying to make 35% profit off a $"<<cirBo<<" price"
            <<setprecision(4)<<endl; //Rounded to show actual money amount
    cout<<"The actual price of the circuit board is $"<<actPri<<endl; 
    
    
    return 0;
}

