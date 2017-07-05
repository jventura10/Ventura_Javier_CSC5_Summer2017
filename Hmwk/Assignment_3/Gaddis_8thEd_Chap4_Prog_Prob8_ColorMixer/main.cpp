/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: This Program gives the color from mixing two primary colors
 * Created on July 1, 2017, 11:29 PM
 */

#include <iostream>

using namespace std;

int main(){
    
    //Declare variables
    string prim1;
    string prim2;
    
    //Map inputs to outputs or process the data
    cout<<"This program mixes two primary colors"<<endl;
    cout<<"Enter a primary color. First letter Capital."<<endl;
    cin>>prim1;
    
    //Set Conditional Statements
    if(prim1=="Red"){
        cout<<"Enter another primary color"<<endl;
        cin>>prim2;
        
        if(prim2=="Yellow"){
            cout<<"The result is Orange."<<endl;
        }
        if(prim2=="Blue"){
            cout<<"The Result is Purple."<<endl;
        }
        else 
            cout<<"Error the two colors entered are not primary colors "<<endl;
    }
    
    else if(prim1=="Blue"){
        cout<<"Enter another primary color"<<endl;
        cin>>prim2;
        
        if(prim2=="Yellow"){
            cout<<"The result is Green."<<endl;
        }
        if(prim2=="Red"){
            cout<<"The Result is Purple."<<endl;
        }
        else 
            cout<<"Error the two colors entered are not primary colors "<<endl;
    }
    
    else if(prim1=="Yellow"){
        cout<<"Enter another primary color"<<endl;
        cin>>prim2;
        
        if(prim2=="Blue"){
            cout<<"The result is Green."<<endl;
        }
        if(prim2=="Red"){
            cout<<"The Result is Orange."<<endl;
        }
        else 
            cout<<"Error the two colors entered are not primary colors "<<endl;
    }
    
    else if(prim1!="Red"||"Blue"||"Yellow")
        cout<<"That is not a Primary color"<<endl;
    
    //Exit stage right!
    
    return 0;
    
}


