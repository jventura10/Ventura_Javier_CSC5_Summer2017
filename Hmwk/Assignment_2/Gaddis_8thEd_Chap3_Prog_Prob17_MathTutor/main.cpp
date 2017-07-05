/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Gives two random numbers as an addition practice problem for a 
 * student and when prompted with the designated key, 
 * the program will show the answer. 
 * Created on June 28, 2017, 1:43 PM
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    //Setting Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int num1,num2,num3; //num1 and num2 are random for the problem
    char j;                     //num3 is answer, j is the key to see num3
    
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
    
    //Prompt For Answer
    cout<<"Press J and Enter when you want to check the answer."<<endl;
    cin>>j;
    cin.ignore();
    if(j==j) {
        cout<<" "<<num1<<endl;
        cout<<"+"<<num2<<endl;
        cout<<"-------"<<endl;
        cout<<" "<<num3<<endl;
    }
    
    return 0;
}

