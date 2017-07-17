/* 
 * File:   main.cpp
 * Author:Javier Ventura
 * Created on June 20, 201, 1:35 PM
 * Purpose:  Gas Tax
 */

//System Libraries Here

#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants 

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and Initialize Variables
    float ppGal=2.75; //2.75 per gallon for regular
    float taxGal=0.764f; //76.4 cents per gallon
    float nGal=15; //Number of Gallons for a fill-up
    float totAmt; //Total Amount tendered or purchase price in $'s
    float totTax; //Total Tax paid on fill up
    float prcTax; //Percentage taxed on purchase
   
    //Map inputs to outputs or process the data
    totAmt=nGal*ppGal;
    totTax=taxGal*nGal;
    prcTax=totTax/totAmt*100;
    
    //Output Transformed data
    cout<<"Number of gallons for a fill up = "<<nGal<<endl;
    cout<<"Price per Gallon paid = $"<<ppGal<<endl;
    cout<<"Tax paid per Gallon = $"<<taxGal<<endl;
    cout<<"Tax Composition = 18.4 cents Fed, 36 cents State "<<endl;
    cout<<"and 8% sales Tax"<<endl;
    cout<<"Total Amount paid to fill-up = $"<<totAmt<<endl;
    cout<<"Total Taxes paid on fill-up = $"<<totTax<<endl;
    cout<<"Percentage Tax paid = "<<prcTax<<"%"<<endl;
    
    //Exit
    return 0;
}

