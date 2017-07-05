/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 19,2017 1:21 PM
 * Purpose:  Sum of 2 Numbers
 */

//System Libraries Here
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned char num1,num2; //1 Byte data type range [0,255]
    unsigned char sum;       //1 Byte data type range [0,255]
    
    //Input or initialize values Here
    num1=50; //50 and 100 are numbers asked for in problem
    num2=100;
    
    
    //Process/Calculations Here
    sum=num1+num2;
    
    //Output Located Here
   
    //cout<<num1<<"+"<<num2<<"="<<sum<<endl; //Example shown in class 2+d=
    
    cout<<static_cast<int>(num1)<<"+"
        <<static_cast<int>(num2)<<"="
        <<static_cast<int>(sum)<<endl;
   

    //Exit
    return 0;
}

