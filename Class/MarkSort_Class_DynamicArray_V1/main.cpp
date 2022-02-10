/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 2nd, 2022, 11:20 AM
 * Purpose:  Order N^2 Sorting Algorithm
 *           or NP if desired
 *           Using Structures
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries
#include "Array1D.h"

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
    const int size=100;
    Array1D array(size);
    
    //Display the outputs
    array.prntAry(10);
    
    //Map the inputs/known to the outputs
    array.mrkSort();
    
    //Display the outputs
    array.prntAry(10);

    //Exit the program
    return 0;
}