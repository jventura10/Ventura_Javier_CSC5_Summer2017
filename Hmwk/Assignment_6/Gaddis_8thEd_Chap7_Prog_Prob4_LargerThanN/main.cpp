/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Larger Than N
 * Created on July 23, 2017, 8:27 PM
 */

#include <iostream>


using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    int SIZE;
    int n;
    int nAry[SIZE];
    int check;
    
    //Prompt for Data
    cout<<"Enter the number to compare the rest to (n): "<<endl;
    cin>>n;
    cout<<"Enter how many numbers you want to compare to N"<<endl;
    cin>>SIZE;
    
    cout<<"Enter the numbers:"<<endl;
    for(int j=0;j<SIZE;j++){
        cin>>nAry[j];
        if(nAry[j]>n){
            cout<<nAry[j]<<" is greater than "<<n<<endl;
            cout<<endl;
        }
    }
  
    return 0;
}
