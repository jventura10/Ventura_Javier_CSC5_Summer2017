/* 
 * File:   main.cpp
 * Author: Jave
 * Purpose: Display Which Division has the Most Sales for Quarter
 * Created on July 16, 2017, 11:40 AM
 */

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

//Function Prototypes
float gSales(string);
void hSales(float,float,float,float);   

int main(int argc, char** argv) {
    //Declare Variables
    float salesSE,salesNE,salesSW,salesNW; //Sales for each Division

    //Call Function
    salesSE=gSales("Southeast");
    salesNE=gSales("Northeast");
    salesSW=gSales("Southwest");
    salesNW=gSales("Northwest");
    hSales(salesSE,salesNE,salesSW,salesNW);

    return 0;
}

//******************************************************************************
//******************************************************************************
//                              Get Sales                                     **
//Inputs:                                                                     ** 
//   nDiv -> Name of Division                                                 **
//   qSales -> Quarter Sales                                                  **
//Output:                                                                     **   
//    qSales -> Quarter Sales                                                 **
//******************************************************************************
//******************************************************************************

float gSales(string nDiv){
    float qSales;
    while(true){
        cout<<"Enter the Quarter Sales for the four Divisions,";
        cout<<" in the order: Southeast,Northeast,Southwest,Northwest"<<endl;
        cin>>qSales;
        if(qSales<0){
            cout<<"Sales for a quarter must be a positive number.Re-Run."<<endl;
        }
        else{
            break;
        }
    }
    return qSales;
}

//******************************************************************************
//******************************************************************************
//                              Highest Sales                                 **
//Inputs:                                                                     ** 
//   qSE -> Quarterly Sales for Southeast                                     **
//   qNE -> Quarterly Sales for Northeast                                     **
//   qSW -> Quarterly Sales for Southwest                                     **
//   qNW -> Quarterly Sales for Northwest                                     **
//Output:                                                                     **   
//  qSE,qNE,qSW,qNW -> Division with highest sales and their dollar amount    **
//******************************************************************************
//******************************************************************************

void hSales(float qSE,float qNE,float qSW,float qNW){
    if(qSE >= qNE && qSE >= qNW && qSE >= qSW){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Division with the highest sales is the 'Southeast' division";
        cout<<" with sales: $"<<qSE<<endl;
    }
    if(qNE >= qSE && qNE >= qNW && qNE >= qSW){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Division with the highest sales is the 'Northeast' division";
        cout<<" with sales: $"<<qNE<<endl;
    }
    if(qSW >= qSE && qSW >= qNE && qSW >= qNW){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Division with the highest sales is the 'Southwest' division";
        cout<<" with sales: $"<<qSW<<endl;
    }
    if(qNW >= qSE && qNW >= qNE && qNW >= qSW){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Division with the highest sales is the 'Northwest' division";
        cout<<" with sales: $"<<qNW<<endl;
    }
}
