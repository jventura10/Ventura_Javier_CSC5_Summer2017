/* 
 * File:   main.cpp
 * Author: Javier Ventura 
 * Purpose: Convert integer from 1-10 to Roman Numeral.
 * Created on July 2, 2017, 6:47 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int num; //num is input number, integer from 1 to 10
    string rom; //rom is Roman conversion
    
    //Prompt for Data
    cout<<"Please enter an integer from 1 to 10.Press enter when done."<<endl;
    cin>>num;
    
    //Set Conditional Statement
    switch(num){
        case 1:cout<<"The Roman Conversion is I";break;
        case 2:cout<<"The Roman Conversion is II";break;
        case 3:cout<<"The Roman Conversion is III";break;
        case 4:cout<<"The Roman Conversion is IV";break;
        case 5:cout<<"The Roman Conversion is V";break;
        case 6:cout<<"The Roman Conversion is VI";break;
        case 7:cout<<"The Roman Conversion is VII";break;
        case 8:cout<<"The Roman Conversion is VIII";break;
        case 9:cout<<"The Roman Conversion is IX";break;
        case 10:cout<<"The Roman Conversion is X";break;
        default:cout<<"Please enter an integer from 1-10.";break;
    }
        
    return 0;
}