/* 
 * File:   main.cpp
 * Author: Jave
 * Purpose: Enter number students, enter names, and then displays name of 
 * who would be in the back and in the front
 * Created on July 9, 2017, 12:08 PM
 */

#include <iostream>


using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int num;      //Number of Students, range of 1-25
    int list=1;   //Keeps track of how many names have been listed to match num
    string name; //name of student 
    string front; //front in the line
    string last; //Last in line
    
    //Prompt For Number of Students
    cout<<"Please enter the number of students. ";
    cout<<"Must be an integer within 1 and 25."<<endl;
    cin>>num;
    
    //Input Validation
    if(num<1 || num>25){
        cout<<"Error! Please Re-run and enter and integer within range."<<endl;
    }
    //Prompt For Names
    cout<<"Enter The names of all students.First Letter capital only.";
    cout<<"Press enter after each name."<<endl;
    cin>>name;
    last=front=name;
    
    //Set Loop
    do{
        list++;
        if(name>last){
            last=name;
        }
        if(name<front){
            front=name;
        }
        cin>>name;
    }while(list < num);

            
    //Display First and Last in the list
    cout<<"The student at the back of the line: "<<last<<endl;
    cout<<"The student at the front of the line: "<<front<<endl;
    

    return 0;
}


