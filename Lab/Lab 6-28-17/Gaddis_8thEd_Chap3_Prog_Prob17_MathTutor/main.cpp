/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Gives two random numbers as practice problem for student
 * Created on June 28, 2017, 1:43 PM
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short num1,num2;
    
    
    
    //Randomly Generate Numbers
    num1=rand()%1000+1; //[1,999]
    num2=rand()%1000+1; //[1,999]
    
    //Process Data 
    cout<<" "<<num1<<endl;
    cout<<"+"<<num2<<endl;
    cout<<"-------"<<endl;
    

    return 0;
}

