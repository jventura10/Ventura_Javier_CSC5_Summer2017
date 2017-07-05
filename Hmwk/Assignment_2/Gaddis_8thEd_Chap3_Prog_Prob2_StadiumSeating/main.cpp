/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: This program
 * Created on June 26, 2017, 9:48 PM
 */

//System Libraries Here
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    //Declare Variables
    float costA=15.00f; // Cost of seating in category A
    float costB=12.00f; //Cost of seating in category B
    float costC=9.00f;  // Cost of seating in category C
    float numA;        //Number of tickets sold for category A,range of float
    float numB;        //Number of tickets sold for category A,range of float
    float numC;        //Number of tickets sold for category A,range of float
    float totalAmt;      //Total amount of money generated from ticket sales

    //Prompt for data
    //Range of possible tickets sold [0,2,147,483,647] -That of a float
    cout<<"This program calculates the amount of money "
            "generated from ticket sales."<<endl;
    cout<<"Please enter the number of tickets sold for ";
    cout<<"Category A,B, and C seating(No Commas)";
    cout<<".Press enter after each number"<<endl;
    cin>>numA>>numB>>numC;
            
    //Process Data
    totalAmt=(costA*numA)+(costB*numB)+(costC*numC);

    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The total amount of money generated is $"<<totalAmt<<endl;


    return 0;

    

    //Exit

}

