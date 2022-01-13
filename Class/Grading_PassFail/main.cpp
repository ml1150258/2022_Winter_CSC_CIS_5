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
    //Score of 75 is a pass
    switch(score){
        case 100:case 99:case 98:case 97:case 96:
        case  95:case 94:case 93:case 92:case 91:
        case  90:case 89:case 88:case 87:case 86:
        case  85:case 84:case 83:case 82:case 81:
        case  80:case 79:case 78:case 77:case 76:
        case  75:grade='P';break;
        default: grade='F';
    }
    
    //Display the outputs
    cout<<"A score of "<<static_cast<int>(score)
            <<" = "<<grade<<endl;

    //Exit the program
    return 0;
}