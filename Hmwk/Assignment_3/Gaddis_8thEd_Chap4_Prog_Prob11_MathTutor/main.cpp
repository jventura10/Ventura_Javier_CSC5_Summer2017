/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: User gets addition problem,enters answer and will be checked.
 * Created on July 1, 2017, 5:28 PM
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    //Setting Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int num1,num2; //num1 and num2 are random for the problem
    unsigned int num3,num4; //num3 is answer,num4 is the response user inputs
    char j;                     //j is the key to see num3
    
    //Randomly Generate Numbers
    num1=rand()%1000+1; //[1,999] the two numbers fit the range for practice
    num2=rand()%1000+1; //[1,999]
    
    //Initialize
    cout<<"Addition Math Tutor is ready!"<<endl;
    
    //Process Data 
    cout<<" "<<num1<<endl;
    cout<<"+"<<num2<<endl;
    cout<<"-------"<<endl;
    
    //Solution for the random problem
    num3=num1+num2;
    
    //Ask for answer
    cout<<"Please enter your answer.Press enter when done."<<endl;
    cin>>num4;
    
    if(num3==num4){
        cout<<"You are correct.Nice Job!"<<endl;
    }
    else
        cout<<"Sorry,that is not correct"<<endl;
    
    return 0;
}