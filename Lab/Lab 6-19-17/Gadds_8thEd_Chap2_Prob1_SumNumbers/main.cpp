/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 19,2017 1:21 PM
 * Purpose:  Sum of 2 Numbers
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like Physics/Math/Conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned char num1,num2; //1 Byte data type range [0,255]
    unsigned char sum;       //1 Byte data type range [0,255]
    
    //Input or initialize values Here
    num1=50;
    num2=100;
    
    
    //Process/Calculations Here
    sum=num1+num2;
    
    //Output Located Here
    cout<<num1<<"+"<<num2<<"="<<sum<<endl;
    cout<<static_cast<int>(num1)<<"+"
        <<static_cast<int>(num2)<<"="
        <<static_cast<int>(sum)<<endl;
   

    //Exit
    return 0;
}

