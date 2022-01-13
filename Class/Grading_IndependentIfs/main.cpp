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
    if(score>=90)             grade='A';
    if(score>=80 && score<90) grade='B';
    if(score>=70 && score<80) grade='C';
    if(score>=60 && score<70) grade='D';
    if(score<60)              grade='F';
    
    //Display the outputs
    cout<<"A score of "<<static_cast<int>(score)
            <<" = "<<grade<<endl;

    //Exit the program
    return 0;
}