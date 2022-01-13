/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 13, 2022, 11:20 AM
 * Purpose:  Truth Table
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y "
        <<"!(X||Y) !X||!Y !(X&&Y)"<<endl;
    
    //First Row
    x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<endl;
    
    //Second Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<endl;

    //Exit the program
    return 0;
}