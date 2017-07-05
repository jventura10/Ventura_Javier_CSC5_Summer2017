/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Program stores 5 prices and displays subtotal and actual total
 * Created on June 25, 2017, 1:54 PM
 */

//System Libraries

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    //Declare Variables
    float itemP1=15.95f; //Prices for the 5 items are given 
    float itemP2=24.95f;
    float itemP3=6.95f;
    float itemP4=12.95f;
    float itemP5=3.95f;
    float slsTax=.07f; //The Sales tax is said to be 7%
    float numTax;      //The dollar amount of sales tax
    float subTot;      //The Subtotal is the item prices added up
    float finTot;      //Final total is the subtotal with included tax
    
    //Process Data
    subTot=itemP1+itemP2+itemP3+itemP4+itemP5;
    numTax=subTot*slsTax;
    finTot=numTax+subTot;
    
    //Output Data
    cout<<"The Price of Item 1 is $"<<itemP1<<endl;
    cout<<"The Price of Item 2 is $"<<itemP2<<endl;
    cout<<"The Price of Item 3 is $"<<itemP3<<endl;
    cout<<"The Price of Item 4 is $"<<itemP4<<endl;
    cout<<"The Price of Item 5 is $"<<itemP5<<endl;
    cout<<"The Subtotal of the items is $"<<subTot<<setprecision(3)<<endl;
    cout<<"With 7% Sales Tax the amount of tax is $"<<numTax
            <<setprecision(4)<<endl;  //Rounded to show actual money amount
    cout<<"The Total amount is $"<<finTot<<endl;
    
    
   //Exit
    return 0;
}

