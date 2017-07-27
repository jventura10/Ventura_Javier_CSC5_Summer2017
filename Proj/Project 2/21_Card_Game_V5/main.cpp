/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: 21 Card Game
 * Updates for V4: Dealer gets 3 cards, Bonus Dollar Prizes
 * Created on July 14, 2017, 10:20 PM
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number library
#include <ctime>     //Time library
#include <cmath>     //Math Library
#include <string.h>  //String Library
#include <iomanip>   //Input Output Manipulation
#include <fstream>   //File Input-Output
#include <vector>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
char suit(char);
char face(char);
//int result(vector<int>& rnd);

//Execution begins here

int main(int argc, char** argv){
            
    //Declare variables
    const int SIZE=7;
    string plyr;    //Name of player   
    int value1;     //If card 1 is an Ace, value is either 1 or 11
    int value2;     //If card 2 is an Ace, value is either 1 or 11
    int value3;     //Possible Value of card 3, 1 or 11 or 0 
    int value4;     //Possible Value of card 4, 1 or 11 or 0
    int value5;     //Possible Value of card 5, 1 or 11 or 0
    int value6;     //Possible Value of card 6, 1 or 11 or 0
    int value7;     //Possible Value of card 7, 1 or 11 or 0
    unsigned int sum1;  //Player Sum
    unsigned int sum2;  //Dealer Sum    
    int worth21; //If Card 1 is a 2 worth is 2,none drawn worth=0 
    int worth22; //If card 2 is a 2 worth is 2,none drawn worth=0
    int worth23; //POssible worth of card 3, 2 or 0
    int worth24; //Possible worth of card 4, 2 or 0
    int worth25; //Possible worth of card 5, 2 or 0
    int worth26; //Possible worth of card 6, 2 or 0
    int worth27; //Possible worth of card 7, 2 or 0
    int worth31; //If Card 1 is a 3 worth is 3,none drawn worth=0 
    int worth32; //If card 2 is a 3 worth is 3,none drawn worth=0
    int worth33; //Possible worth of card 3, 3 or 0
    int worth34; //Possible worth of card 4, 3 or 0
    int worth35; //Possible worth of card 5, 3 or 0
    int worth36; //Possible worth of card 6, 3 or 0
    int worth37; //Possible worth of card 7, 3 or 0
    int worth41; //If Card 1 is a 4 worth is 4,none drawn worth=0 
    int worth42; //If card 2 is a 4 worth is 4,none drawn worth=0
    int worth43; //Possible worth of card 3, 4 or 0
    int worth44; //Possible worth of card 4, 4 or 0
    int worth45; //Possible worth of card 5, 4 or 0
    int worth46; //Possible worth of card 6, 4 or 0
    int worth47; //Possible worth of card 7, 4 or 0
    int worth51; //If Card 1 is a 5 worth is 5,none drawn worth=0 
    int worth52; //If card 2 is a 5 worth is 5,none drawn worth=0
    int worth53; //Possible worth of card 3, 5 or 0
    int worth54; //Possible worth of card 4, 5 or 0 
    int worth55; //Possible worth of card 5, 5 or 0
    int worth56; //Possible worth of card 6, 5 or 0
    int worth57; //Possible worth of card 7, 5 or 0
    int worth61; //If Card 1 is a 6 worth is 6,none drawn worth=0 
    int worth62; //If card 2 is a 6 worth is 6,none drawn worth=0
    int worth63; //Possible worth of card 3, 6 or 0
    int worth64; //Possible worth of card 4, 6 or 0
    int worth65; //Possible worth of card 5, 6 or 0
    int worth66; //Possible worth of card 6, 6 or 0
    int worth67; //Possible worth of card 7, 6 or 0
    int worth71; //If Card 1 is a 7 worth is 7,none drawn worth=0 
    int worth72; //If card 2 is a 7 worth is 7,none drawn worth=0
    int worth73; //Possible worth of card 3, 7 or 0
    int worth74; //Possible worth of card 4, 7 or 0
    int worth75; //Possible worth of card 5, 7 or 0
    int worth76; //Possible worth of card 6, 7 or 0
    int worth77; //Possible worth of card 7, 7 or 0
    int worth81; //If Card 1 is a 8 worth is 8,none drawn worth=0 
    int worth82; //If card 2 is a 8 worth is 8,none drawn worth=0
    int worth83; //Possible worth of card 3, 8 or 0
    int worth84; //Possible worth of card 4, 8 or 0
    int worth85; //Possible worth of card 5, 8 or 0
    int worth86; //Possible worth of card 6, 8 or 0
    int worth87; //Possible worth of card 7, 8 or 0
    int worth91; //If Card 1 is a 9 worth is 9,none drawn worth=0 
    int worth92; //If card 2 is a 9 worth is 9,none drawn worth=0
    int worth93; //Possible worth of card 3, 9 or 0
    int worth94; //Possible worth of card 4, 9 or 0
    int worth95; //Possible worth of card 5, 9 or 0
    int worth96; //Possible worth of card 6, 9 or 0
    int worth97; //Possible worth of card 7, 9 or 0
    int worthT1; //If Card 1 is a 10 worth is 10,none drawn worth=0 
    int worthT2; //If card 2 is a 10 worth is 10,none drawn worth=0
    int worthT3; //Possible worth of card 3, 10 or 0
    int worthT4; //Possible worth of card 4, 10 or 0
    int worthT5; //Possible worth of card 5, 10 or 0 
    int worthT6; //Possible worth of card 6, 10 or 0
    int worthT7; //Possible worth of card 7, 10 or 0
    int worthJ1; //If Card 1 is a J worth is 10,none drawn worth=0 
    int worthJ2; //If card 2 is a J worth is 2,none drawn worth=0
    int worthJ3; //Possible worth of card 3, 10 or 0
    int worthJ4; //Possible worth of card 4, 10 or 0 
    int worthJ5; //Possible worth of card 5, 10 or 0 
    int worthJ6; //Possible worth of card 6, 10 or 0
    int worthJ7; //Possible worth of card 7, 10 or 0
    int worthQ1; //If Card 1 is a Q worth is 10,none drawn worth=0 
    int worthQ2; //If card 2 is a Q worth is 10,none drawn worth=0
    int worthQ3; //Possible worth of card 3, 10 or 0
    int worthQ4; //Possible worth of card 4, 10 or 0
    int worthQ5; //Possible worth of card 5, 10 or 0
    int worthQ6; //Possible worth of card 6, 10 or 0
    int worthQ7; //Possible worth of card 7, 10 or 0
    int worthK1; //If Card 1 is a K worth is 10,none drawn worth=0 
    int worthK2; //If card 2 is a K worth is 10,none drawn worth=0
    int worthK3; //Possible worth of card 3, 10 or 0
    int worthK4; //Possible worth of card 4, 10 or 0
    int worthK5; //Possible worth of card 5, 10 or 0
    int worthK6; //Possible worth of card 6, 10 or 0
    int worthK7; //Possible worth of card 7, 10 or 0
    char hitMe;  //The choice to ask for 3rd card
    char hitMe2; //The choice to ask for 4th card
    bool play = true; //Keeps game running, unless players wants to quit game
    float bets; //Bet per round, must be less than pot
    float pot; //Total pot of money 
    char nxtRnd; //The option to play another round
    int a[3]={0,0,0};
    unsigned int bonus[7]={50,100,200,250,300,500,1000};
    vector<int> rnd;
   
    cout<<"Black Jack"<<endl;
    cout<<"Card Layout: ";
    cout<<"D for Diamonds, S for Spades,C for Clubs,H for Hearts"<<endl;
    cout<<"T=10 J-Jack Q-Queen K-King A-Ace"<<endl;
    cout<<endl;
    cout<<"Enter Desired User Name: ";
    cin>>plyr;
    cout<<endl;
    cout<<"Enter The Amount for your BlackJack Pot (No Commas): $";
    cin>>pot;
    cout<<endl;
    
    do{
        srand(static_cast<unsigned int>(time(0)));
        
        char card1=rand()%52+1; //One of the two initial cards for player
        char card2=rand()%52+1; //One of the two initial cards for player 
        char card3=rand()%52+1; //Possible extra card for player
        char card4=rand()%52+1; //Possible extra card for player
        char card5=rand()%52+1; //Dealer card 1
        char card6=rand()%52+1; //Dealer card 2
        char card7=rand()%52+1; //Dealer card 3
        
        int v=rand()%7+0; //[0,6] Pick a random number for bonus prize
               
        card1!=card2;
        card2!=card3;
        card3!=card4;
        card4!=card5;
        card5!=card6;
        card6!=card7;

        cout<<"Enter Bet for round: $";
        cin>>bets;
        cout<<endl;
        for(int j=pot;j<bets;){
            cout<<"Sorry You don't have that much in your pot."<<setw(4)
                    <<" Enter Bet Again: $";
            cin>>bets;
            cout<<endl;
            while(bets>pot){
                cout<<"Sorry You don't have that much in your pot.";
                cout<<" Enter Bet Again: $";
                cin>>bets;
                cout<<endl;
            }
        }
        
        cout<<face(card1)<<suit(card1)<<" "<<face(card2)<<suit(card2)<<endl;
        
        if(card1==1 || card1==14 || card1==27 || card1==40){
            cout<<endl;
            cout<<"Ace can be 1 or 11."<<endl;
            cin>>value1;
            while(value1!=1&&value1!=11){
                cout<<"1 or 11"<<endl;
                cin>>value1;
                cout<<endl;
            }
        }
        else{
            value1=0;
        }
        if(card2==1 || card2==14 || card2==27 || card2==40){ 
            cout<<endl;
            cout<<"Ace can be 1 or 11. "<<endl;
            cin>>value2;
            while(value2!=1&&value2!=11){
                cout<<"1 or 11"<<endl;
                cin>>value2;
                cout<<endl;
            }
        }
        else{
            value2=0;
        }

        if(card1==2 || card1==15 || card1==28 || card1==41){
            worth21=2;
        }
        else{
            worth21=0;
        }
        if(card2==2 || card2==15 || card2==28 || card2==41){
            worth22=2;
        }
        else{
            worth22=0;
        }

        if(card1==3 || card1==16 || card1==29 || card1==42){
            worth31=3;
        }
        else{
            worth31=0;
        }

        if(card2==3 || card2==16 || card2==29 || card2==42){
            worth32=3;
        }
        else{
            worth32=0;
        }

        if(card1==4 || card1==17 || card1==30 || card1==43){
            worth41=4;
        }
        else{
            worth41=0;
        }

        if(card2==4 || card2==17 || card2==30 || card2==43){
            worth42=4;
        }
        else{
            worth42=0;
        }

        if(card1==5 || card1==18 || card1==31 || card1==44){
            worth51=5;
        }
        else{
            worth51=0;
        }

        if(card2==5 || card2==18 || card2==31 || card2==44){
            worth52=5;
        }
        else{
            worth52=0;
        }

        if(card1==6 || card1==19 || card1==32 || card1==45){
            worth61=6;
        }
        else{
            worth61=0;
        }

        if(card2==6 || card2==19 || card2==32 || card2==45){
            worth62=6;
        }
        else{
            worth62=0;
        }

        if(card1==7 || card1==20 || card1==33 || card1==46){
            worth71=7;
        }
        else{
            worth71=0;
        }

        if(card2==7 || card2==20 || card2==33 || card2==46){
            worth72=7;
        }
        else{
            worth72=0;
        }

        if(card1==8 || card1==21 || card1==34 || card1==47){
            worth81=8;
        }
        else{
            worth81=0;
        }

        if(card2==8 || card2==21 || card2==34 || card2==47){
            worth82=8;
        }
        else{
            worth82=0;
        }

        if(card1==9 || card1==22 || card1==35 || card1==48){
            worth91=9;
        }
        else{
            worth91=0;
        }

        if(card2==9 || card2==22 || card2==35 || card2==48){
            worth92=9;
        }
        else{
            worth92=0;
        }

        if(card1==10 || card1==23 || card1==36 || card1==49){
            worthT1=10;
        }
        else{
            worthT1=0;
        }

        if(card2==10 || card2==23 || card2==36 || card2==49){
            worthT2=10;
        }
        else{
            worthT2=0;
        }

        if(card1==11 || card1==24 || card1==37 || card1==50){
            worthJ1=10;
        }
        else{
            worthJ1=0;
        }

        if(card2==11 || card2==24 || card2==37 || card2==50){
            worthJ2=10;
        }
        else{
            worthJ2=0;
        }

        if(card1==12 || card1==25 || card1==38 || card1==51){
            worthQ1=10;
        }
        else{
            worthQ1=0;
        }

        if(card2==12 || card2==25 || card2==38 || card2==51){
            worthQ2=10;
        }
        else{
            worthQ2=0;
        }


        if(card1==13 || card1==26 || card1==39 || card1==52){
            worthK1=10;
        }
        else{
            worthK1=0;
        }

        if(card2==13 || card2==26 || card2==39 || card2==52){
            worthK2=10;
        }
        else{
            worthK2=0;
        }
        
        //The sum is the worth of two cards drawn, rest are 0
        sum1=value1+value2+worth21+worth22+worth31+worth32+worth41+worth42+worth51
        +worth52+worth61+worth62+worth71+worth72+worth81+worth82+worth91+worth92+
        worthT1+worthT2+worthJ1+worthJ2+worthQ1+worthQ2+worthK1+worthK2;
        cout<<"Sum: "<<sum1<<endl;
        cout<<endl;
       
        //Automatic Win
        if(sum1==21){
            cout<<"21!! You win! "<<endl;
            cout<<endl;
            a[0]++;
            //result(&rnd);
            cout<<"Earnings (This Round): $"<<bets<<endl;
            pot=pot+bets;  
            cout<<"Your Pot: $"<<showpoint<<pot<<endl;
            if(a[0]==10){
                for(int i=0;i<SIZE;i++){
                    if(bonus[i]==250){
                        cout<<"You have won a bonus prize of: $250";
                        pot=pot+(1.0f*250);
                        cout<<"Your Pot: $"<<pot<<endl;
                    }
                }
            }    
        }
        else{
            cout<<"Do you want another card? Enter Y for Yes,N for No"<<endl;
            cin>>hitMe;
            cout<<endl;
            //Input Validation
            while(hitMe!='Y' && hitMe!='N'){
                cout<<"Y for Yes and N for No"<<endl;
                cin>>hitMe;
                cout<<endl;
            }
        }
        
        if(hitMe=='Y'){
            cout<<face(card1)<<suit(card1)<<" "<<face(card2)<<suit(card2);
            cout<<" "<<face(card3)<<suit(card3)<<endl;
            
            if(card3==1 || card3==14 || card3==27 || card3==40){
                cout<<endl;
                cout<<"Ace can be 1 or 11."<<endl;
                cin>>value3;
                cout<<endl;
                while(value3!=1 && value3!=11){
                    cout<<"1 or 11"<<endl;
                    cin>>value3;
                    cout<<endl;
                }
            }
            else{
                value3=0;
            }
            if(card3==2 || card3==15 || card3==28 || card3==41){
                worth23=2;
            }
            else{
                worth23=0;
            }
            if(card3==3 || card3==16 || card3==29 || card3==42){ 
                worth33=3;
            }
            else{
                worth33=0;
            }

            if(card3==4 || card3==17 || card3==30 || card3==43){
                worth43=4;
            }
            else{
                worth43=0;
            }

            if(card3==5 || card3==18 || card3==31 || card3==44){
                worth53=5;
            }
            else{
                worth53=0;
            }

            if(card3==6 || card3==19 || card3==32 || card3==45){
                worth63=6;
            }
            else{
                worth63=0;
            }

            if(card3==7 || card3==20 || card3==33 || card3==46){
                worth73=7;
            }
            else{
                worth73=0;
            }

            if(card3==8 || card3==21 || card3==34 || card3==47){
                worth83=8;
            }
            else{
                worth83=0;
            }

            if(card3==9 || card3==22 || card3==35 || card3==48){
                worth93=9;
            }
            else{
                worth93=0;
            }

            if(card3==10 || card3==23 || card3==36 || card3==49){
                worthT3=10;
            }
            else{
                worthT3=0;
            }

            if(card3==11 || card3==24 || card3==37 || card3==50){
                worthJ3=10;
            }
            else{
                worthJ3=0;
            }
            if(card3==12 || card3==25 || card3==38 || card3==51){
                worthQ3=10;
            }
            else{
                worthQ3=0;
            }
            if(card3==13 || card3==26 || card3==39 || card3==52){
                worthK3=10;
            }
            else{
                worthK3=0;
            }

            sum1=value1+value2+worth21+worth22+worth31+worth32+worth41+worth42+
            worth51+worth52+worth61+worth62+worth71+worth72+worth81+worth82+
            worth91+worth92+worthT1+worthT2+worthJ1+worthJ2+worthQ1+worthQ2+
            worthK1+worthK2+worthK3+worthQ3+worthJ3+worthT3+worth93+worth83+
            worth73+worth63+worth53+worth43+worth33+worth23+value3;

            cout<<"Sum: "<<sum1<<endl;
            cout<<endl;
            if(sum1>21){
                cout<<"You went over 21! Sorry You Lose!"<<endl;
                cout<<"You Lost: $"<<bets<<endl;
                cout<<endl;
                pot=pot-bets;
                cout<<"Your Pot: $"<<showpoint<<pot<<endl; 
                cout<<endl;
                a[1]++;
                if(pot==0){
                    cout<<"Sorry, Your Pot is empty.Come Back Next Time"<<endl;
                    play=false;
                    cout<<endl;
                    cout<<plyr<<endl;
                    cout<<"---------"<<endl;
                    cout<<"Wins: "<<a[0]<<endl;
                    cout<<"Losses: "<<a[1]<<endl;
                    cout<<"Draws: "<<a[2]<<endl;
                    return 0;
                }   
            }
            else if(sum1==21){
                cout<<"21!! You win! "<<endl;
                cout<<endl;
                a[0]++; 
                cout<<"Earnings (This Round): $"<<bets<<endl;
                pot=pot+bets;
                cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                cout<<endl;
                if(a[0]==10){
                    for(int i=0;i<SIZE;i++){
                        if(bonus[i]==250){
                            cout<<"You have won a bonus prize of: $250"<<endl;
                            pot=pot+(1.0f*250);
                            cout<<"Your Pot: $"<<pot<<endl;
                        }
                    }
                }    
            }
            
            else{
                cout<<"Do you want another card? Enter Y for Yes,N for No"<<endl;
                cin>>hitMe2;
                cout<<endl;
                while(hitMe2!='Y' && hitMe2!='N'){
                    cout<<"Y for Yes and N for No"<<endl;
                    cin>>hitMe2;
                    cout<<endl;
                }
            }
            //Overload Function Suit and Face with multiple cards
            if(hitMe2=='Y'){
                cout<<face(card1)<<suit(card1)<<" "<<face(card2)<<suit(card2);
                cout<<" "<<face(card3)<<suit(card3)<<" "<<face(card4)
                        <<suit(card4)<<endl;

                if(card4==1 || card4==14 || card4==27 || card4==40){
                    cout<<endl;
                    cout<<"Ace can be 1 or 11."<<endl;
                    cin>>value4;
                    cout<<endl;
                    while(value4!=1&&value4!=11){
                        cout<<"1 or 11"<<endl;
                        cin>>value4;
                        cout<<endl;
                    }
                }
                else{
                    value4=0;
                }
                if(card4==2 || card4==15 || card4==28 || card4==41){
                    worth24=2;
                }
                else{
                    worth24=0;
                }
                if(card4==3 || card4==16 || card4==29 || card4==42){ 
                    worth34=3;
                }
                else{
                    worth34=0;
                }

                if(card4==4 || card4==17 || card4==30 || card4==43){
                    worth44=4;
                }
                else{
                    worth44=0;
                }

                if(card4==5 || card4==18 || card4==31 || card4==44){
                    worth54=5;
                }
                else{
                    worth54=0;
                }

                if(card4==6 || card4==19 || card4==32 || card4==45){
                    worth64=6;
                }
                else{
                    worth64=0;
                }

                if(card4==7 || card4==20 || card4==33 || card4==46){
                    worth74=7;
                }
                else{
                    worth74=0;
                }

                if(card4==8 || card4==21 || card4==34 || card4==47){
                    worth84=8;
                }
                else{
                    worth84=0;
                }

                if(card4==9 || card4==22 || card4==35 || card4==48){
                    worth94=9;
                }
                else{
                    worth94=0;
                }

                if(card4==10 || card4==23 || card4==36 || card4==49){
                    worthT4=10;
                }
                else{
                    worthT4=0;
                }

                if(card4==11 || card4==24 || card4==37 || card4==50){
                    worthJ4=10;
                }
                else{
                    worthJ4=0;
                }
                if(card4==12 || card4==25 || card4==38 || card4==51){
                    worthQ4=10;
                }
                else{
                    worthQ4=0;
                }
                if(card4==13 || card4==26 || card4==39 || card4==52){
                    worthK4=10;
                }
                else{
                    worthK4=0;
                }

                sum1=value1+value2+worth21+worth22+worth31+worth32+worth41+worth42+
                worth51+worth52+worth61+worth62+worth71+worth72+worth81+worth82+
                worth91+worth92+worthT1+worthT2+worthJ1+worthJ2+worthQ1+worthQ2+
                worthK1+worthK2+worthK3+worthQ3+worthJ3+worthT3+worth93+worth83+
                worth73+worth63+worth53+worth43+worth33+worth23+value3+value4+
                worth24+worth34+worth44+worth54+worth64+worth74+worth84+worth94+
                worthT4+worthJ4+worthQ4+worthK4;

                cout<<"Sum: "<<sum1<<endl;
                cout<<endl;
                
                if(sum1>21){
                    cout<<"You went over 21! Sorry You Lose!"<<endl;
                    cout<<endl;
                    cout<<"You Lost: $0"<<endl;
                    a[1]++;
                    pot=pot-bets;
                    cout<<"Your Pot: $"<<pot<<endl;
                    if(pot==0){
                        cout<<"Sorry, Your Pot is empty.Come Back Next Time";
                        cout<<endl;
                        play=false;
                        cout<<endl;
                        cout<<plyr<<endl;
                        cout<<"---------"<<endl;
                        cout<<"Wins: "<<a[0]<<endl;
                        cout<<"Losses: "<<a[1]<<endl;
                        cout<<"Draws: "<<a[2]<<endl;
                        return 0;
                    }   
                }
                else if(sum1==21){
                    cout<<"21!! You Win!!"<<endl;
                    cout<<endl;
                    a[0]++;
                    cout<<"Earnings (This Round): $"<<bets<<endl;
                    pot=pot+bets;
                    cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                    cout<<endl;
                    if(a[0]==10){
                        for(int i=0;i<SIZE;i++){
                            if(bonus[i]==250){
                                cout<<"You have won a bonus prize of: $250"<<endl;
                                pot=pot+(1.0f*250);
                                cout<<"Your Pot: $"<<pot<<endl;
                            }
                        }
                    }    
                }
                else{
                    cout<<"You stayed at: "<<sum1<<endl;
                    cout<<endl;
                    cout<<"Dealers Turn"<<endl;
                    cout<<endl;
                }
            }
            else if(hitMe2=='N'){
                cout<<endl;
                cout<<"You stayed at: "<<sum1<<endl;
                cout<<endl;
                cout<<"Dealers Turn"<<endl;
                cout<<endl;
            }
        }
        else if(hitMe=='N'){
            cout<<endl;
            cout<<"You stayed at: "<<sum1<<endl;
            cout<<endl;
            cout<<"Dealers Turn"<<endl;
            cout<<endl;
        }

        if(sum1<21){    
            cout<<"Dealers Cards:"<<endl;
            cout<<face(card5)<<suit(card5)<<" "<<face(card6)<<suit(card6)<<endl;

            if(card5==1 || card5==14 || card5==27 || card5==40){
                cout<<endl;
                cout<<"Ace can be 1 or 11."<<endl;
                cout<<"11"<<endl;
                cout<<endl;
                value5=11;
            }
            else{
                value5=0;
            }
            if(card6==1 || card6==14 || card6==27 || card6==40){
                cout<<endl;
                cout<<"Ace can be 1 or 11. "<<endl;
                cout<<"11"<<endl;
                cout<<endl;
                value6=11;
            }
            else{
                value6=0;
            }

            if(card5==2 || card5==15 || card5==28 || card5==41){
                worth25=2;
            }
            else{
                worth25=0;
            }

            if(card6==2 || card6==15 || card6==28 || card6==41){
                worth26=2;
            }
            else{
                worth26=0;
            }

            if(card5==3 || card5==16 || card5==29 || card5==42){
                worth35=3;
            }
            else{
                worth35=0;
            }

            if(card6==3 || card6==16 || card6==29 || card6==42){
                worth36=3;
            }
            else{
                worth36=0;
            }

            if(card5==4 || card5==17 || card5==30 || card5==43){
                worth45=4;
            }
            else{
                worth45=0;
            }

            if(card6==4 || card6==17 || card6==30 || card6==43){
                worth46=4;
            }
            else{
                worth46=0;
            }

            if(card5==5 || card5==18 || card5==31 || card5==44){
                worth55=5;
            }
            else{
                worth55=0;
            }

            if(card6==5 || card6==18 || card6==31 || card6==44){
                worth56=5;
            }
            else{
                worth56=0;
            }

            if(card5==6 || card5==19 || card5==32 || card5==45){
                worth65=6;
            }
            else{
                worth65=0;
            }

            if(card6==6 || card6==19 || card6==32 || card6==45){
                worth66=6;
            }
            else{
                worth66=0;
            }

            if(card5==7 || card5==20 || card5==33 || card5==46){
                worth75=7;
            }
            else{
                worth75=0;
            }

            if(card6==7 || card6==20 || card6==33 || card6==46){
                worth76=7;
            }
            else{
                worth76=0;
            }

            if(card5==8 || card5==21 || card5==34 || card5==47){
                worth85=8;
            }
            else{
                worth85=0;
            }

            if(card6==8 || card6==21 || card6==34 || card6==47){
                worth86=8;
            }
            else{
                worth86=0;
            }

            if(card5==9 || card5==22 || card5==35 || card5==48){
                worth95=9;
            }
            else{
                worth95=0;
            }

            if(card6==9 || card6==22 || card6==35 || card6==48){
                worth96=9.0f;
            }
            else{
                worth96=0;
            }

            if(card5==10 || card5==23 || card5==36 || card5==49){
                worthT5=10.0f;
            }
            else{
                worthT5=0;
            }

            if(card6==10 || card6==23 || card6==36 || card6==49){
                worthT6=10.0f;
            }
            else{
                worthT6=0;
            }

            if(card5==11 || card5==24 || card5==37 || card5==50){
                worthJ5=10.0f;
            }
            else{
                worthJ5=0;
            }

            if(card6==11 || card6==24 || card6==37 || card6==50){
                worthJ6=10.0f;
            }
            else{
                worthJ6=0;
            }

            if(card5==12 || card5==25 || card5==38 || card5==51){
                worthQ5=10.0f;
            }
            else{
                worthQ5=0;
            }

            if(card6==12 || card6==25 || card6==38 || card6==51){
                worthQ6=10.0f;
            }
            else{
                worthQ6=0;
            }


            if(card5==13 || card5==26 || card5==39 || card5==52){
                worthK5=10.0f;
            }
            else{
                worthK5=0;
            }

            if(card6==13 || card6==26 || card6==39 || card6==52){
                worthK6=10.0f;
            }
            else{
                worthK6=0;
            }

            sum2=value5+value6+worth25+worth26+worth35+worth36+worth45+worth46+
            worth55+worth56+worth65+worth66+worth75+worth76+worth85+worth86+
            worth95+worth96+worthT5+worthT6+worthJ5+worthJ6+worthQ5+worthQ6+
            worthK5+worthK6;

            cout<<"Dealer Sum: "<<sum2<<endl;
            
            if(sum2<17){
                cout<<endl;
                cout<<face(card5)<<suit(card5)<<" "<<face(card6)<<suit(card6);
                cout<<" "<<face(card7)<<suit(card7)<<endl;

                if(card7==1 || card7==14 || card7==27 || card7==40){
                    cout<<endl;
                    cout<<"Ace can be 1 or 11."<<endl;
                    cout<<"11"<<endl;
                    value7=11;
                    cout<<endl;
                }
                else{
                    value7=0;
                }
                if(card7==2 || card7==15 || card7==28 || card7==41){
                    worth27=2;
                }
                else{
                    worth27=0;
                }
                if(card7==3 || card7==16 || card7==29 || card7==42){ 
                    worth37=3;
                }
                else{
                    worth37=0;
                }

                if(card7==4 || card7==17 || card7==30 || card7==43){
                    worth47=4;
                }
                else{
                    worth47=0;
                }

                if(card7==5 || card7==18 || card7==31 || card7==44){
                    worth57=2;
                }
                else{
                    worth57=0;
                }

                if(card7==6 || card7==19 || card7==32 || card7==45){
                    worth67=6;
                }
                else{
                    worth67=0;
                }

                if(card7==7 || card7==20 || card7==33 || card7==46){
                    worth77=7;
                }
                else{
                    worth77=0;
                }

                if(card7==8 || card7==21 || card7==34 || card7==47){
                    worth87=8;
                }
                else{
                    worth87=0;
                }

                if(card7==9 || card7==22 || card7==35 || card7==48){
                    worth97=9;
                }
                else{
                    worth97=0;
                }

                if(card7==10 || card7==23 || card7==36 || card7==49){
                    worthT7=10;
                }
                else{
                    worthT7=0;
                }

                if(card7==11 || card7==24 || card7==37 || card7==50){
                    worthJ7=10;
                }
                else{
                    worthJ7=0;
                }
                if(card7==12 || card7==25 || card7==38 || card7==51){
                    worthQ7=10;
                }
                else{
                    worthQ7=0;
                }
                if(card7==13 || card7==26 || card7==39 || card7==52){
                    worthK7=10;
                }
                else{
                    worthK7=0;
                }

                sum2=value5+value6+value7+worth25+worth26+worth27+worth35+
                worth36+worth37+worth45+worth46+worth47+worth55+worth56+worth57+
                worth65+worth66+worth67+worth75+worth76+worth77+worth85+worth86+
                worth87+worth95+worth96+worth97+worthT5+worthT6+worthT7+worthJ5+
                worthJ6+worthJ7+worthQ5+worthQ6+worthQ7+worthK5+worthK6+worthK7;
                        
                cout<<"Dealer Sum: "<<sum2<<endl;
                cout<<endl;
                
                if(sum2==21){
                    cout<<endl;
                    cout<<"Dealer Wins!"<<endl;
                    cout<<endl;
                    cout<<"You Lost: $"<<bets<<endl;
                    pot=pot-bets;
                    cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                    cout<<endl;
                    a[1]++;
                    if(pot==0){
                        cout<<"Sorry, Your Pot is empty.Come Back Next Time";
                        cout<<endl;
                        play=false;
                        cout<<endl;
                        cout<<plyr<<endl;
                        cout<<"---------"<<endl;
                        cout<<"Wins: "<<a[0]<<endl;
                        cout<<"Losses: "<<a[1]<<endl;
                        cout<<"Draws: "<<a[2]<<endl;
                        return 0;
                    }
                }
                else if(sum2<21 && sum2>sum1){
                    cout<<endl;
                    cout<<"Dealer Wins!"<<endl;
                    cout<<endl;
                    cout<<"You Lost: $"<<bets<<endl;
                    pot=pot-bets;
                    cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                    cout<<endl;
                    a[1]++;
                    if(pot==0){
                        cout<<"Sorry, Your Pot is empty.Come Back Next Time";
                        cout<<endl;
                        play=false;
                        cout<<endl;
                        cout<<plyr<<endl;
                        cout<<"---------"<<endl;
                        cout<<"Wins: "<<a[0]<<endl;
                        cout<<"Losses: "<<a[1]<<endl;
                        cout<<"Draws: "<<a[2]<<endl;
                        return 0;
                    }
                }
                else if(sum2>21){
                    cout<<endl;
                    cout<<"Player Wins!"<<endl;
                    cout<<endl;
                    a[0]++;
                    cout<<"Earnings (This Round): $"<<bets<<endl;
                    pot=pot+bets;
                    cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                    cout<<endl;
                    if(a[0]==10){
                        for(int i=0;i<SIZE;i++){
                            if(bonus[i]==250){
                                cout<<"You have won a bonus prize of: $250"<<endl;
                                pot=pot+(1.0f*250);
                                cout<<"Your Pot: $"<<pot<<endl;
                            }
                        }
                    }    
                }
                else if(sum2<21 && sum1>sum2){
                    cout<<endl;
                    cout<<"Player Wins!"<<endl;
                    cout<<endl;
                    a[0]++;
                    cout<<"Earnings (This Round): $"<<bets<<endl;
                    pot=pot+bets;
                    cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                    cout<<endl;
                    if(a[0]==10){
                        for(int i=0;i<SIZE;i++){
                            if(bonus[i]==250){
                                cout<<"You have won a bonus prize of: $250"<<endl;
                                pot=pot+(1.0f*250);
                                cout<<"Your Pot: $"<<pot<<endl;
                            }
                        }
                    }    
                }   
                else if(sum2=sum1){
                    cout<<"Draw This Round"<<endl;
                    cout<<endl;
                    pot=pot;
                    a[2]++;
                    cout<<"Your Pot: $"<<pot<<endl;
                    cout<<endl;
                } 
            }
            else if(sum2>17 && sum2<21){
                if(sum1>sum2){
                    cout<<endl;
                    cout<<"Player Wins!"<<endl;
                    cout<<endl;
                    a[0]++;
                    cout<<"Earnings (This Round): $"<<bets<<endl;
                    pot=pot+bets;
                    cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                    cout<<endl;
                    //Linear Search
                    if(a[0]==10){
                        for(int i=0;i<SIZE;i++){
                            if(bonus[i]==250){
                                cout<<"You have won a bonus prize of: $250"<<endl;
                                pot=pot+(1.0f*250);
                                cout<<"Your Pot: $"<<pot<<endl;
                            }
                        }
                    }    
                }
                else if(sum2>sum1){
                    cout<<endl;
                    cout<<"Dealer Wins!"<<endl;
                    cout<<endl;
                    cout<<"You Lost: $"<<showpoint<<bets<<endl;
                    pot=pot-bets;
                    cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                    cout<<endl;
                    a[1]++;
                    if(pot==0){
                        cout<<"Sorry, Your Pot is empty.Come Back Next Time";
                        cout<<endl;
                        play=false;
                        cout<<endl;
                        cout<<plyr<<endl;
                        cout<<"---------"<<endl;
                        cout<<"Wins: "<<a[0]<<endl;
                        cout<<"Losses: "<<a[1]<<endl;
                        cout<<"Draws: "<<a[2]<<endl;
                        return 0;
                    }   
                }
                else if(sum2==sum1){
                    cout<<endl;
                    cout<<"Draw This Round"<<endl;
                    cout<<endl;
                    pot=pot;
                    a[2]++;
                    cout<<"Your Pot: $"<<pot<<endl;
                    cout<<endl;
                }
            }
            else if(sum2==21){
                cout<<endl;
                cout<<"Dealer Wins!"<<endl;
                cout<<endl;
                cout<<"You Lost: $"<<showpoint<<bets<<endl;
                pot=pot-bets;
                cout<<"Your Pot: $"<<showpoint<<pot<<endl;
                cout<<endl;
                a[1]++;
                if(pot==0){
                    cout<<"Sorry, Your Pot is empty.Come Back Next Time";
                    cout<<endl;
                    play=false;
                    cout<<endl;
                    cout<<plyr<<endl;
                    cout<<"---------"<<endl;
                    cout<<"Wins: "<<a[0]<<endl;
                    cout<<"Losses: "<<a[1]<<endl;
                    cout<<"Draws: "<<a[2]<<endl;
                    return 0;
                }   
            }
        }
        cout<<"Play again? Y For Yes and N For No"<<endl;
        cin>>nxtRnd;
        if(nxtRnd=='Y'){
            play=true;
        }
        else{
            play=false;
            cout<<endl;
            cout<<plyr<<endl;
            cout<<"---------"<<endl;
            cout<<"Wins: "<<a[0]<<endl;
            cout<<"Losses: "<<a[1]<<endl;
            cout<<"Draws: "<<a[2]<<endl;
            break;
        }
    }while(play=true);
    
    //Exit stage right!
    return 0;

}

char face(char card){
    switch(card%13){
        case 1:return 'A';
        case 2:return '2';
        case 3:return '3';
        case 4:return '4';
        case 5:return '5';
        case 6:return '6';
        case 7:return '7';
        case 8:return '8';
        case 9:return '9';
        case 10:return 'T';
        case 11:return 'J';
        case 12:return 'Q';
        default:return 'K';
    }
}

char suit(char card){
    if(card<=13)return 'S';//S -> Spades
    if(card<=26)return 'D';//D -> Diamond
    if(card<=39)return 'C';//C -> Clubs
    return 'H';//H -> Hearts;
}

/*int result(vector<int>& rnd){
    int a[3];
    for(int index=0;index<100;index++){
        if(a[0]++){
            cout<<"Round: "<<rnd[index+1]<<" Won"<<endl;
        }            
        else if(a[1]++){
            cout<<"Round: "<<rnd[index+1]<<" Lost"<<endl;
        }
        else if(a[2]++){
            cout<<"Round: "<<rnd[index+1]<<" Tied"<<endl;
        }
    }
}
 */