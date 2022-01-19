/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:cout<<"Place Problem 0 here"<<endl;break;
            case 1:cout<<"Place Problem 1 here"<<endl;break;
            case 2:cout<<"Place Problem 2 here"<<endl;break;
            case 3:cout<<"Place Problem 3 here"<<endl;break;
            case 4:cout<<"Place Problem 4 here"<<endl;break;
            case 5:cout<<"Place Problem 5 here"<<endl;break;
            case 6:cout<<"Place Problem 6 here"<<endl;break;
            case 7:cout<<"Place Problem 7 here"<<endl;break;
            case 8:cout<<"Place Problem 8 here"<<endl;break;
            case 9:cout<<"Place Problem 9 here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}