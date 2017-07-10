/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: User picks a type of problem,enters answer and will be checked.
 * Created on July 9, 2017, 9:02 PM
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float num1,num2; //num1 and num2 are random for the problem
    float num3,num4;    //num3 is answer,num4 is the response user inputs
    int oper;               //Operation for the math problem
    bool selection=true;

    //Initialize Loop
    do{
        //Set Random Number Seed
        srand(static_cast<unsigned int>(time(0)));
        
        cout<<"Math Tutor is ready!"<<endl;
        cout<<"Pick (1)Addition (2)Subtraction (3)Multiplication (4)Division";
        cout<<" (5)Quit Program"<<endl;
        cin>>oper;
    
        switch(oper){
            case 1:
                num1=rand()%1000+500; //[500,999] 
                num2=rand()%500+1; //[1,499]
                cout<<"Addition"<<endl;
                cout<<" "<<num1<<endl;
                cout<<"+"<<num2<<endl;
                cout<<"-------"<<endl;
                num3=num1+num2;
                break;
            case 2:
                num1=rand()%1000+500; //[500,999] 
                num2=rand()%500+1; //[1,499]
                cout<<"Subtraction"<<endl;
                cout<<" "<<num1<<endl;
                cout<<"-"<<num2<<endl;
                cout<<"-------"<<endl;
                num3=num1-num2;
                break;
            case 3:
                num1=rand()%21+1; //[1,20] 
                num2=rand()%21+1; //[1,20]
                cout<<"Multiplication"<<endl;
                cout<<" "<<num1<<endl;
                cout<<"x"<<num2<<endl;
                cout<<"-------"<<endl;
                num3=num1*num2;
                break;
            case 4:
                num1=rand()%51+20; //[500,999] 
                num2=rand()%11+1; //[1,499]
                cout<<"Division.Use Decimals if needed."<<endl;
                cout<<" "<<num1<<endl;
                cout<<"/"<<num2<<endl;
                cout<<"-------"<<endl;
                num3=num1/num2;
                break;
            case 5:
                cout<<"Quitting Math Tutor :("<<endl;          
                return 0;
            default:
                cout<<"Please enter a valid response."<<endl;
        }
        //Ask for answer
        cout<<"Please enter your answer when ready.Press enter when done."<<endl;
        cin>>num4;
    
        if(num3==num4){
            cout<<"You are correct.Nice Job!"<<endl;
            cout<<"   "<<endl;
        }
        else{
            cout<<"Sorry,that is not correct"<<endl;
            cout<<"  "<<endl;
        }
        
    }while(selection=true);
    
    return 0;
}
