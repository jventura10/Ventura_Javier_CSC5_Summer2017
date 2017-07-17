/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on July 6, 2017, 10:47 AM
 * Purpose:  Craps Game V1
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Srand and Rand
#include <ctime>     // Time
#include <iomanip>   //Input Output Manipulation
#include <fstream>   //File IO

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float CNVPERC=100.0f; //Conversion To Percentage

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ifstream in;
    ofstream out;
    int nGames,wins,losses,nThrows,mxThrGm,fGames;  
    int win12,win11,win10,win9,win8,win7,win6,win5,win4,win3,win2;
    int loss12,loss11,loss10,loss9,loss8,loss7,loss6,loss5;
    int loss4,loss3,loss2;
    
    
    //Initialize variables
    nGames=360000,wins=0,losses=0,nThrows=0,mxThrGm=0;
    win12=win11=win10=win9=win8=win7=win6=win5=win4=win3=win2=0;
    loss12=loss11=loss10=loss9=loss8=loss7=loss6=loss5=loss4=loss3=loss2=0;
    
    //Open the file and read the number of games to play from the file
    in.open("fGames.dat");
    out.open("stats.dat");
    while(in>>fGames);
    nGames=fGames<nGames?fGames:nGames;
    
    //Play Craps
    for(int game=1;game<=nGames;game++){
        //Throw a pair of die
        char die1=rand()%6+1; //[1,6]
        char die2=rand()%6+1; //[1,6]
        char sum1=die1+die2;
        unsigned short gmThrws=1;
        bool win=false;
        nThrows++;
        if(sum1==2||sum1==3||sum1==12)losses++;
        else if(sum1==7||sum1==11){
        wins++; 
        win=true;
        }else{
            bool stpGame=false;
            do{
                die1=rand()%6+1; //[1,6]
                die2=rand()%6+1; //[1,6]
                char sum2=die1+die2;
                nThrows++;gmThrws++;
                if(sum1==sum2){
                    wins++;
                    stpGame=true;
                    win=true;
                }else if(sum2==7){
                    losses++;
                    stpGame=true;
                }
            }while(!stpGame);
        }
        if(gmThrws>mxThrGm)mxThrGm=gmThrws;
        switch(sum1){
            case 12:win?win12++:loss12++;break;
            case 11:win?win11++:loss11++;break;
            case 10:win?win10++:loss10++;break;
            case 9:win?win9++:loss9++;break; 
            case 8:win?win8++:loss8++;break;
            case 7:win?win7++:loss7++;break;
            case 6:win?win6++:loss6++;break;
            case 5:win?win5++:loss5++;break;
            case 4:win?win4++:loss4++;break;
            case 3:win?win3++:loss3++;break;
            default:win?win2++:loss2++;
        }
    }
    
    //Output the transformed data
    cout<<"Number of Games Played = "<<nGames<<endl;
    cout<<"Number of Games Played = "<<wins+losses<<endl;
    cout<<"Number of Wins         = "<<wins<<endl;
    cout<<"Number of Losses       = "<<losses<<endl;
    cout<<"Percentage of Wins     = "<<CNVPERC*wins/nGames<<"%"<<endl;
    cout<<"Percentage of Losses   = "<<CNVPERC*losses/nGames<<"%"<<endl;
    cout<<"Average Throws/Game    = "<<static_cast<float>(nThrows)/nGames<<endl;
    cout<<"Max Throws in a Game   = "<<mxThrGm<<endl;
    cout<<"Throw    Wins   Losses   Total"<<endl;
    cout<<"  2 "<<setw(8)<<win2<<setw(8)<<loss2<<setw(8)<<win2+loss2<<endl;
    cout<<"  3 "<<setw(8)<<win3<<setw(8)<<loss3<<setw(8)<<win3+loss3<<endl;
    cout<<"  4 "<<setw(8)<<win4<<setw(8)<<loss4<<setw(8)<<win4+loss4<<endl;
    cout<<"  5 "<<setw(8)<<win5<<setw(8)<<loss5<<setw(8)<<win5+loss5<<endl;
    cout<<"  6 "<<setw(8)<<win6<<setw(8)<<loss6<<setw(8)<<win6+loss6<<endl;
    cout<<"  7 "<<setw(8)<<win7<<setw(8)<<loss7<<setw(8)<<win7+loss7<<endl;
    cout<<"  8 "<<setw(8)<<win8<<setw(8)<<loss8<<setw(8)<<win8+loss8<<endl;
    cout<<"  9 "<<setw(8)<<win9<<setw(8)<<loss9<<setw(8)<<win9+loss9<<endl;
    cout<<"  10 "<<setw(8)<<win10<<setw(8)<<loss10<<setw(8)<<win10+loss10<<endl;
    cout<<"  11 "<<setw(8)<<win11<<setw(8)<<loss11<<setw(8)<<win11+loss11<<endl;
    cout<<"  12 "<<setw(8)<<win12<<setw(8)<<loss12<<setw(8)<<win12+loss12<<endl;
    cout<<"Total Games using Wins and losses = "<<win2+win3+win4+win5+win6+win7+
            win8+win9+win10+win11+win12+loss2+loss3+loss4+loss5+loss6+loss7+
            loss8+loss9+loss10+loss11+loss12;
    
    //Output the data to a file
    out<<"Number of Games Played = "<<nGames<<endl;
    out<<"Number of Games Played = "<<wins+losses<<endl;
    out<<"Number of Wins         = "<<wins<<endl;
    out<<"Number of Losses       = "<<losses<<endl;
    out<<"Percentage of Wins     = "<<CNVPERC*wins/nGames<<"%"<<endl;
    out<<"Percentage of Losses   = "<<CNVPERC*losses/nGames<<"%"<<endl;
    out<<"Average Throws/Game    = "<<static_cast<float>(nThrows)/nGames<<endl;
    out<<"Max Throws in a Game   = "<<mxThrGm<<endl;
    out<<"Throw    Wins   Losses   Total"<<endl;
    out<<"  2 "<<setw(8)<<win2<<setw(8)<<loss2<<setw(8)<<win2+loss2<<endl;
    out<<"  3 "<<setw(8)<<win3<<setw(8)<<loss3<<setw(8)<<win3+loss3<<endl;
    out<<"  4 "<<setw(8)<<win4<<setw(8)<<loss4<<setw(8)<<win4+loss4<<endl;
    out<<"  5 "<<setw(8)<<win5<<setw(8)<<loss5<<setw(8)<<win5+loss5<<endl;
    out<<"  6 "<<setw(8)<<win6<<setw(8)<<loss6<<setw(8)<<win6+loss6<<endl;
    out<<"  7 "<<setw(8)<<win7<<setw(8)<<loss7<<setw(8)<<win7+loss7<<endl;
    out<<"  8 "<<setw(8)<<win8<<setw(8)<<loss8<<setw(8)<<win8+loss8<<endl;
    out<<"  9 "<<setw(8)<<win9<<setw(8)<<loss9<<setw(8)<<win9+loss9<<endl;
    out<<"  10 "<<setw(8)<<win10<<setw(8)<<loss10<<setw(8)<<win10+loss10<<endl;
    out<<"  11 "<<setw(8)<<win11<<setw(8)<<loss11<<setw(8)<<win11+loss11<<endl;
    out<<"  12 "<<setw(8)<<win12<<setw(8)<<loss12<<setw(8)<<win12+loss12<<endl;
    out<<"Total Games using Wins and losses = "<<win2+win3+win4+win5+win6+win7+
            win8+win9+win10+win11+win12+loss2+loss3+loss4+loss5+loss6+loss7+
            loss8+loss9+loss10+loss11+loss12;
    
    //Exit stage right!
    in.close();
    out.close();
    return 0;
}

