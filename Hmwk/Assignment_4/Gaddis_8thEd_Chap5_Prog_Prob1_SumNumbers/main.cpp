/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Add all numbers up from 1 to the number entered.
 * Created on July 7, 2017, 11:30 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int input,sum=0; //Integer from 1 to 50
    
    //Display Purpose and Prompt for Data
    cout<<"This Program adds all the numbers from 1 to";
    cout<<" the number entered."<<endl;
    cout<<"Please enter an integer from 1 to 50.";
    cout<<" Press enter when done."<<endl;
    cin>>input;
    
    //Create Loop
    //Sum increases by number that increases by 1
    for(int num=1;num<=input;num++){
        sum += num;
    
    }
    
    //Display Total
    cout<<"The total sum of integers from 1 to "<<input;
    cout<<" is "<<sum<<"."<<endl;

    return 0;
}

