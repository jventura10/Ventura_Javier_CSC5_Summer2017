
/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: 21 Card Game, Dealer is COM 
 * Created on July 14, 2017, 10:20 PM
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number library
#include <ctime>     //Time library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
char suit(char);
char face(char);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    char card1=rand()%52+1; //One of the two initial cards for player
    char card2=rand()%52+1; //One of the two initial cards for player 
    char card3=rand()%52+1;
    char card4=rand()%51+1;
    unsigned int value1;        //If Ace is card 1, value is either 1 or 11
    unsigned int value2;        //If Ace is card 2, value is either 1 or 11
    unsigned int sum1;      //Player Sum
    unsigned int sum2;      //Dealer Sum
    unsigned int worth21; //If Card 1 is a 2 worth is 2,none drawn worth=0 
    unsigned int worth22; //If card 2 is a 2 worth is 2,none drawn worth=0
    unsigned int worth31; //If Card 1 is a 3 worth is 3,none drawn worth=0 
    unsigned int worth32; //If card 2 is a 3 worth is 3,none drawn worth=0
    unsigned int worth41; //If Card 1 is a 4 worth is 4,none drawn worth=0 
    unsigned int worth42; //If card 2 is a 4 worth is 4,none drawn worth=0
    unsigned int worth51; //If Card 1 is a 5 worth is 5,none drawn worth=0 
    unsigned int worth52; //If card 2 is a 5 worth is 5,none drawn worth=0
    unsigned int worth61; //If Card 1 is a 6 worth is 6,none drawn worth=0 
    unsigned int worth62; //If card 2 is a 6 worth is 6,none drawn worth=0
    unsigned int worth71; //If Card 1 is a 7 worth is 7,none drawn worth=0 
    unsigned int worth72; //If card 2 is a 7 worth is 7,none drawn worth=0
    unsigned int worth81; //If Card 1 is a 8 worth is 8,none drawn worth=0 
    unsigned int worth82; //If card 2 is a 8 worth is 8,none drawn worth=0
    unsigned int worth91; //If Card 1 is a 9 worth is 9,none drawn worth=0 
    unsigned int worth92; //If card 2 is a 9 worth is 9,none drawn worth=0
    unsigned int worthT1; //If Card 1 is a 10 worth is 10,none drawn worth=0 
    unsigned int worthT2; //If card 2 is a 10 worth is 10,none drawn worth=0
    unsigned int worthJ1; //If Card 1 is a J worth is 10,none drawn worth=0 
    unsigned int worthJ2; //If card 2 is a J worth is 2,none drawn worth=0
    unsigned int worthQ1; //If Card 1 is a Q worth is 10,none drawn worth=0 
    unsigned int worthQ2; //If card 2 is a Q worth is 10,none drawn worth=0
    unsigned int worthK1; //If Card 1 is a K worth is 10,none drawn worth=0 
    unsigned int worthK2; //If card 2 is a K worth is 10,none drawn worth=0
    char hitMe;
    
    
    cout<<"Random Card"<<endl;
    cout<<"Card = "<<static_cast<int>(card1)
                <<" -> "<<face(card1)<<suit(card1)<<endl<<endl;
    cout<<"Card = "<<static_cast<int>(card2)
                <<" -> "<<face(card2)<<suit(card2)<<endl<<endl;
    
    if(card1==1 || card1==14 || card1==27 || card1==40){
        cout<<"Ace can be 1 or 11."<<endl;
        cin>>value1;
    }
    else{
        value1=0;
    }
    if(card2==1 || card2==14 || card2==27 || card2==40){ 
        cout<<"Ace can be 1 or 11. "<<endl;
        cin>>value2;
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
        worth92=9.0f;
    }
    else{
        worth92=0;
    }
    
    if(card1==10 || card1==23 || card1==36 || card1==49){
        worthT1=10.0f;
    }
    else{
        worthT1=0;
    }
    
    if(card2==10 || card2==23 || card2==36 || card2==49){
        worthT2=10.0f;
    }
    else{
        worthT2=0;
    }
    
    if(card1==11 || card1==24 || card1==37 || card1==50){
        worthJ1=10.0f;
    }
    else{
        worthJ1=0;
    }
    
    if(card2==11 || card2==24 || card2==37 || card2==50){
        worthJ2=10.0f;
    }
    else{
        worthJ2=0;
    }
    
    if(card1==12 || card1==25 || card1==38 || card1==51){
        worthQ1=10.0f;
    }
    else{
        worthQ1=0;
    }
    
    if(card2==12 || card2==25 || card2==38 || card2==51){
        worthQ2=10.0f;
    }
    else{
        worthQ2=0;
    }
    
    
    if(card1==13 || card1==26 || card1==39 || card1==52){
        worthK1=10.0f;
    }
    else{
        worthK1=0;
    }
    
    if(card2==13 || card2==26 || card2==39 || card2==52){
        worthK2=10.0f;
    }
    else{
        worthK2=0;
    }
    
    sum1=value1+value2+worth21+worth22+worth31+worth32+worth41+worth42+worth51
    +worth52+worth61+worth62+worth71+worth72+worth81+worth82+worth91+worth92+
    worthT1+worthT2+worthJ1+worthJ2+worthQ1+worthQ2+worthK1+worthK2;
    cout<<"Sum: "<<sum1<<endl;
    
    if(sum1>21){
        cout<<"You went over 21! Sorry You Lose!"<<endl;
    }
    else if(sum1==21){
        cout<<"21!! You win! "<<endl;
    }
    else{
        cout<<" "<<endl;
        cout<<"Do you want another card?"<<endl;
        cin>>hitMe;
    }
    
    //Input Validation
    while(hitMe!='Y' && hitMe!='N'){
        cout<<"Y for Yes and N for No"<<endl;
        cin>>hitMe;
    }
           
    if(hitMe=='Y'){
        cout<<"sdnfkj"<<endl;
    }
    else{
        cout<<"niuesfi"<<endl;
    }
    
    //Input Data
    
    /* //Map inputs to outputs or process the data
    cout<<"All the Cards"<<endl;
    for(char card=1;card<=52;card++){
        cout<<"Card = "<<static_cast<int>(card)
                <<" -> "<<face(card)<<suit(card)<<endl;
    }
     */ 
    
    //Output the transformed data
    
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
