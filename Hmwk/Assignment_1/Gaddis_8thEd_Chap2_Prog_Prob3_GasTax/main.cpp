/* 
 * File:   main.cpp
 * Author:Javier Ventura
 * Created on June 20, 201, 1:35 PM
 * Purpose: This Program calculates the total sales tax on a $95 purchase of gas
 */

//System Libraries Here

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
    //Declare and Initialize Variables
    float totPur=95.0f; //$95 Dollars is the total purchase price
    float taxSta=.04f;  //The State Sales Tax is 6%
    float taxCot=.02f;  //The County Sales Tax is 2%
    float actSta;       //This is the actual state tax rate * total purchase
    float actCot;       //This is the actual county tax rate * total purchase
    float totTax;       //The total tax is state + county tax
    
    //Map inputs to outputs or process the data
    actSta=totPur*taxSta; //Multiply tax rate by total to get actual dollar 
    actCot=totPur*taxCot; //amount for both state and county tax
    totTax=actSta+actCot; //Adding both dollar amount taxes equals total tax
    
    //Output Transformed data
    cout<<"The total sales tax on a $95 purchase of gas ";
    cout<<"is $"<<totTax<<endl;
            
    //Exit
    return 0;
}

