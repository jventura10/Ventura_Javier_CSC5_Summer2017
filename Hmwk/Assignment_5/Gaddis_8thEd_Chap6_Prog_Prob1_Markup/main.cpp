/* 
 * File:   main.cpp
 * Author: Javier Ventura 
 * Purpose: Display Retail Price with Markup Percentage
 * Created on July 10, 2017, 1:02 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
const float CNVPERC=100.00f;

//Function Prototypes
float calcRet(float,float,float);

int main(int argc, char** argv) {
    //Declare Variables
    float w;    //Markup Percentage
    float m;    //Retail Price
    float r;    //WholeSale cost
    
    //Prompt For Data
    cout<<"Given Markup Percentage and Wholesale cost,";
    cout<<"Retail Price will be displayed."<<endl;
    cout<<""<<endl;
    cout<<"Please enter the Wholesale cost, in dollar amount."<<endl;
    cin>>w;
    cout<<"Please enter the Markup Percentage.Without Percent Symbol."<<endl;
    cin>>m;
    
    //Output the Inputs to Confirm
    cout<<"Wholesale cost    = $"<<w<<endl;
    cout<<"Markup Percentage =  "<<m<<"%"<<endl;
    
    //Output Data From Function
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retail Price      = $"<<calcRet(m,w,r)<<endl;

    //Exit 
    
    return 0;
}

//******************************************************************************
//******************************************************************************
//                          Calculate Retail Price                            **
//Inputs:                                                                     ** 
//    mPer ->  Markup Percentage                                              **
//    wCost -> WholeSale Cost                                                 **
//Output:                                                                     **   
//    retP -> Retail Price                                                    **
//******************************************************************************
//******************************************************************************

float calcRet(float mPer,float wCost,float retP){
    return retP=(wCost*(mPer/CNVPERC))+wCost;
}
