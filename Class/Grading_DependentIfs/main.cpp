/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 13, 2022, 10:20 AM
 * Purpose:  Grading
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char grade;
    unsigned char score;
    
    //Initialize Variables
    score=rand()%51+50;//[50,100]
    
    //Map the inputs/known to the outputs
    if     (score>=90) grade='A';
    else if(score>=80) grade='B';
    else if(score>=70) grade='C';
    else if(score>=60) grade='D';
    else               grade='F';
    
    //Display the outputs
    cout<<"A score of "<<static_cast<int>(score)
            <<" = "<<grade<<endl;

    //Exit the program
    return 0;
}