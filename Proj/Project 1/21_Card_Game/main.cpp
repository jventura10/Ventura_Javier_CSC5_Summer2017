

/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: 21 Card Game, Dealer is COM 
 * Created on July 14, 2017, 10:20 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    //Set Random Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int init1;
    int init2;
    unsigned int sum1;
    float bet;
    char hit;
    int card1;
    
    init1=rand()%10+1;
    init2=rand()%10+1;
    card1=rand()%10+1;
    sum1=init1+init2;
    
    cout<<"BlackJack Table!"<<endl;
    cout<<endl;
    
    cout<<"Place Your bet: $";
    cin>>bet;
    
    cout<<"Your cards: "<<init1<<" "<<init2<<endl;
    cout<<"Sum: "<<sum1<<endl;
    if(sum1==21){
        cout<<"You Win!!!"<<endl;
        cout<<"Earnings: $"<<bet*2.0<<endl;
    }
    
    cout<<endl;
    cout<<"Do you want another card?"<<endl;
    cin>>hit;
    while(hit=='Y'){
        cout<<"Your Cards: "<<init1<<" "<<init2<<" "<<card1<<endl;
        sum1=init1+init2+card1;
        cout<<"Sum: "<<sum1<<endl;
        cin>>hit;
        if(sum1<21){
            
        }
    }
   
    
    
    return 0;
}

