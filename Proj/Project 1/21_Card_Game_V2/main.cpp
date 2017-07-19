/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: 21 Card Game
 * Updates: V2 Dealer is introduced, Player can ask for 2 extra cards,
 *          compares cards and declares winner, bets are now introduced.
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
    char card5=rand()%51+1;
    char card6=rand()%51+1;
    int value1;        //If Ace is card 1, value is either 1 or 11
    int value2;        //If Ace is card 2, value is either 1 or 11
    int value3;
    int value4;
    int value5;
    int value6;
    unsigned int sum1;      //Player Sum
    unsigned int sum2;
    int worth21; //If Card 1 is a 2 worth is 2,none drawn worth=0 
    int worth22; //If card 2 is a 2 worth is 2,none drawn worth=0
    int worth23;
    int worth24;
    int worth25;
    int worth26;
    int worth31; //If Card 1 is a 3 worth is 3,none drawn worth=0 
    int worth32; //If card 2 is a 3 worth is 3,none drawn worth=0
    int worth33;
    int worth34;
    int worth35;
    int worth36;
    int worth41; //If Card 1 is a 4 worth is 4,none drawn worth=0 
    int worth42; //If card 2 is a 4 worth is 4,none drawn worth=0
    int worth43;
    int worth44;
    int worth45;
    int worth46;
    int worth51; //If Card 1 is a 5 worth is 5,none drawn worth=0 
    int worth52; //If card 2 is a 5 worth is 5,none drawn worth=0
    int worth53;
    int worth54;
    int worth55;
    int worth56;
    int worth61; //If Card 1 is a 6 worth is 6,none drawn worth=0 
    int worth62; //If card 2 is a 6 worth is 6,none drawn worth=0
    int worth63;
    int worth64;
    int worth65;
    int worth66;
    int worth71; //If Card 1 is a 7 worth is 7,none drawn worth=0 
    int worth72; //If card 2 is a 7 worth is 7,none drawn worth=0
    int worth73;
    int worth74;
    int worth75;
    int worth76;
    int worth81; //If Card 1 is a 8 worth is 8,none drawn worth=0 
    int worth82; //If card 2 is a 8 worth is 8,none drawn worth=0
    int worth83;
    int worth84;
    int worth85;
    int worth86;
    int worth91; //If Card 1 is a 9 worth is 9,none drawn worth=0 
    int worth92; //If card 2 is a 9 worth is 9,none drawn worth=0
    int worth93;
    int worth94;
    int worth95;
    int worth96;
    int worthT1; //If Card 1 is a 10 worth is 10,none drawn worth=0 
    int worthT2; //If card 2 is a 10 worth is 10,none drawn worth=0
    int worthT3;
    int worthT4;
    int worthT5;
    int worthT6;
    int worthJ1; //If Card 1 is a J worth is 10,none drawn worth=0 
    int worthJ2; //If card 2 is a J worth is 2,none drawn worth=0
    int worthJ3;
    int worthJ4;
    int worthJ5;
    int worthJ6;
    int worthQ1; //If Card 1 is a Q worth is 10,none drawn worth=0 
    int worthQ2; //If card 2 is a Q worth is 10,none drawn worth=0
    int worthQ3;
    int worthQ4;
    int worthQ5;
    int worthQ6;
    int worthK1; //If Card 1 is a K worth is 10,none drawn worth=0 
    int worthK2; //If card 2 is a K worth is 10,none drawn worth=0
    int worthK3;
    int worthK4;
    int worthK5;
    int worthK6;
    char hitMe;
    bool play = true;
    float bets;
    char nxtRnd;
    
    card3!=card2;
    card2!=card3;
    card3!=card4;
    card4!=card5;
    card5!=card6;
    
    cout<<"Black Jack "<<endl;
    cout<<"Enter Bets: $";
    cin>>bets;
    cout<<face(card1)<<suit(card1)<<" "<<face(card2)<<suit(card2)<<endl;
    
    if(card1==1 || card1==14 || card1==27 || card1==40){
        cout<<"Ace can be 1 or 11."<<endl;
        cin>>value1;
        while(value1!=1&&value1!=11){
            cout<<"1 or 11"<<endl;
            cin>>value1;
        }
    }
    else{
        value1=0;
    }
    if(card2==1 || card2==14 || card2==27 || card2==40){ 
        cout<<"Ace can be 1 or 11. "<<endl;
        cin>>value2;
        while(value2!=1&&value2!=11){
            cout<<"1 or 11"<<endl;
            cin>>value2;
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
        cout<<"You Lost: $"<<bets<<endl;
        return 0;
    }
    else if(sum1==21){
        cout<<"21!! You win! "<<endl;
        cout<<"Earnings (This Round): $"<<bets*2.0<<endl;
        return 0;;
    }
    else{
        cout<<" "<<endl;
        cout<<"Do you want another card? Enter Y for Yes,N for No"<<endl;
        cin>>hitMe;
        cout<<" "<<endl;
    }
    
    //Input Validation
    while(hitMe!='Y' && hitMe!='N'){
        cout<<"Y for Yes and N for No"<<endl;
        cin>>hitMe;
    }
           
    if(hitMe=='Y'){
        cout<<face(card1)<<suit(card1)<<" "<<face(card2)<<suit(card2);
        cout<<" "<<face(card3)<<suit(card3)<<endl;
        if(card3==1 || card3==14 || card3==27 || card3==40){
            cout<<"Ace can be 1 or 11."<<endl;
            cin>>value3;
            while(value3!=1&&value3!=11){
                cout<<"1 or 11"<<endl;
                cin>>value3;
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
            worth53=2;
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
            worth83=4;
        }
        else{
            worth83=0;
        }

        if(card3==9 || card3==22 || card3==35 || card3==48){
            worth93=4;
        }
        else{
            worth93=0;
        }

        if(card3==10 || card3==23 || card3==36 || card3==49){
            worthT3=5;
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
        worth91+worth92+worthT1+worthT2+worthJ1+worthJ2+worthQ1+worthQ2+worthK1
        +worthK2+worthK3+worthQ3+worthJ3+worthT3+worth93+worth83+worth73
        +worth63+worth53+worth43+worth33+worth23+value3;
        
        cout<<"Sum: "<<sum1<<endl;
        if(sum1>21){
            cout<<"You went over 21! Sorry You Lose!"<<endl;
            cout<<"You Lost: $"<<bets<<endl;
            return 0;
        }
        else if(sum1==21){
            cout<<"21!! You win! "<<endl;
            cout<<"Earnings (This Round): $"<<bets*2.0<<endl;
            return 0;
        }
        else{
            cout<<" "<<endl;
            cout<<"Do you want another card? Enter Y for Yes,N for No"<<endl;
            cin>>hitMe;
        }
        
        while(hitMe!='Y' && hitMe!='N'){
        cout<<"Y for Yes and N for No"<<endl;
        cin>>hitMe;
        }
        
        if(hitMe=='Y'){
            cout<<face(card1)<<suit(card1)<<" "<<face(card2)<<suit(card2);
            cout<<" "<<face(card3)<<suit(card3)<<" "<<face(card4)<<suit(card4)
                    <<endl;
        
            if(card4==1 || card4==14 || card4==27 || card4==40){
                cout<<"Ace can be 1 or 11."<<endl;
                cin>>value4;
                while(value4!=1&&value4!=11){
                    cout<<"1 or 11"<<endl;
                    cin>>value4;
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
            if(sum1>21){
                cout<<"You went over 21! Sorry You Lose!"<<endl;
                cout<<"You Lost: $0"<<endl;
                return 0;
            }
            else if(sum1==21){
                cout<<"21!! You Win!!"<<endl;
                cout<<"Earnings (This Round): $"<<bets*2.0<<endl;
                return 0;
            }
            else{
                cout<<"You stayed at: "<<sum1<<endl;
                cout<<"Dealers Turn"<<endl;
                cout<<endl;
            }
        }
        else{
            cout<<"You stayed at: "<<sum1<<endl;
            cout<<"Dealers Turn"<<endl;
            cout<<""<<endl;
            
        }
    }
    else{
        cout<<"You stayed at: "<<sum1<<endl;
        cout<<"Dealers Turn"<<endl;
        cout<<" "<<endl;
    }
   
    if(sum1<21){    
        cout<<"Dealers Cards:"<<endl;
        cout<<face(card5)<<suit(card5)<<" "<<face(card6)<<suit(card6)<<endl;

        if(card5==1 || card5==14 || card5==27 || card5==40){
            cout<<"Ace can be 1 or 11."<<endl;
            cout<<"11"<<endl;
            value5=11;
        }
        else{
            value5=0;
        }
        if(card6==1 || card6==14 || card6==27 || card6==40){ 
            cout<<"Ace can be 1 or 11. "<<endl;
            cout<<"11"<<endl;
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

        sum2=value5+value6+worth25+worth26+worth35+worth36+worth45+worth46+worth55
        +worth56+worth65+worth66+worth75+worth76+worth85+worth86+worth95+worth96+
        worthT5+worthT6+worthJ5+worthJ6+worthQ5+worthQ6+worthK5+worthK6;

        cout<<"Dealer Sum: "<<sum2<<endl;
        if(sum1>sum2){
            cout<<""<<endl;
            cout<<"Player Wins!"<<endl;
            cout<<"Earnings (This Round): $"<<bets*2.0<<endl;
            cout<<endl;
        }
        if(sum2>sum1){
            cout<<"Dealer Wins!"<<endl;
            cout<<"You Lost: $"<<bets<<endl;
            cout<<""<<endl;
        }

    }
    
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