/* 
 * File:   main.cpp
 * Author: Jay
 * Purpose: This Program finds the Average rainfall in a three month period
 * Created on June 26, 2017, 10:56 PM
 */


//System Libraries
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {

    //Declare Variables
    const int SIZE=10;
    char month1[SIZE];   //The name of month 1
    char month2[SIZE] ;  //The name of month 2
    char month3[SIZE];   //The name of month 3
    float amtMo1;  //Amount of rain (in inches) that fell in month 1
    float amtMo2;  //Amount of rain (in inches) that fell in month 2
    float amtMo3;  //Amount of rain (in inches) that fell in month 3
    float avgRfll; //Average number of rainfall(inches) that fell for 3 months
    
    //Prompt for Data 
    cout<<"This program calculates the average rainfall that dropped in a ";
    cout<<"three month period."<<endl;
    cout<<"Input the first month.Press enter when done."<<endl;
    cin.getline(month1,SIZE);
    cout<<"Input the second month.Press enter when done."<<endl;
    cin.getline(month2,SIZE);
    cout<<"Input the third month.Press enter when done."<<endl;
    cin.getline(month3,SIZE);
    cout<<"Now enter the three amounts of rainfall that fell those months ";
    cout<<",in inches, in the same order. Press enter when done."<<endl;
    cin>>amtMo1>>amtMo2>>amtMo3;
    
    //Process Data
    avgRfll=(amtMo1+amtMo2+amtMo3)/3;

    
    //Output Data
    cout<<"The average rainfall for "<<month1<<","<<month2<<", and "<<month3
            <<" is "<<avgRfll<<" inches."<<endl;


return 0;


//Exit

}


