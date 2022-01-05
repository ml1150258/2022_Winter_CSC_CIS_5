/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  Lab 1 Optimize Fuel Purchase
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char CNVPERC=100;//Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float gGage,  //Gas Gage percentage full
        tnkSize,  //Size of tank in gallons
            mpg;  //Miles per Gallon
    float galReq; //Gallons Required at fill-up
    
    //Initialize Variables
    gGage=0.75f;//75% full
    tnkSize=2.2e1f;//22.0 -> Number of gallons
    mpg=0.17e2f;   //17.0 -> Gas mileage
    
    //Map the inputs/known to the outputs
    galReq=tnkSize*(1-gGage);
    
    //Display the outputs
    cout<<"Gas Gage % Full    = "<<gGage*CNVPERC<<"%"<<endl;
    cout<<"Size of Tank       = "<<tnkSize<<" gallons"<<endl;
    cout<<"Gas Mileage        = "<<mpg<<" mpg"<<endl;
    cout<<"Gallons at fill up = "<<galReq<<" gallons"<<endl;

    //Exit the program
    return 0;
}