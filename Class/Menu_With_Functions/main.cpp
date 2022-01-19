/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 12th, 2021, 10:51 AM
 * Purpose:  Basic Menu with Functions for exams and homework
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void prob0();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:prob0();break;
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}

void prob0(){
    cout<<"Place Problem 0 here"<<endl;
}

void prob1(){
    cout<<"Place Problem 1 here"<<endl;
}

void prob2(){
    cout<<"Place Problem 2 here"<<endl;
}

void prob3(){
    cout<<"Place Problem 3 here"<<endl;
}

void prob4(){
    cout<<"Place Problem 4 here"<<endl;
}

void prob5(){
    cout<<"Place Problem 5 here"<<endl;
}

void prob6(){
    cout<<"Place Problem 6 here"<<endl;
}

void prob7(){
    cout<<"Place Problem 7 here"<<endl;
}

void prob8(){
    cout<<"Place Problem 8 here"<<endl;
}

void prob9(){
    cout<<"Place Problem 9 here"<<endl;
}