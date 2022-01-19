/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
#include <iomanip>   //Formatting Lbrary
#include <cmath>     //Math Library - Log Function
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //Display the menu
        cout<<endl;
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 - Monty Hall Problem - Savitch 9thEd Chap3 Prob9"<<endl;
        cout<<"Problem 1 - Square Problem  - Gaddis 9thEd Chap5 Prob22"<<endl;
        cout<<"Problem 2 - Random Search - Gaddis 9thEd Chap5 Prob20"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 0:{  
                //Declare outer loop variables
                int nStay,  //Number of times we win the prize if we stay
                nChange,//Number of times we win the prize if we change doors
                nPlyGm; //Number of times we play the game

                //Initialize the outer loop variables
                nPlyGm=1000000;
                nStay=nChange=0;

                for(int play=1;play<=nPlyGm;play++){
                    //Declare Variables
                    char prize, pick, open;

                    //Initialize or input i.e. set variable values
                    prize=rand()%3+1;//[1-3]  The door where prize is located
                    pick=rand()%3+1; //[1-3]  The door I choose 
                    do{
                        open=rand()%3+1;//[1-3]  The door which was open to show no prize
                    }while(open==prize||open==pick);

                    //Win/lose
                    if(prize==pick)nStay++;
                    else nChange++;
                }

                //Display the outputs
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Total Games Played = "<<setw(10)<<nPlyGm<<endl;
                cout<<"Wins when staying  = "<<setw(10)<<nStay<<endl;
                cout<<"Wins when changing = "<<setw(10)<<nChange<<endl;
                cout<<"Probability when staying  to win = "
                        <<100.0f*nStay/nPlyGm<<"%"<<endl;
                cout<<"Probability when changing to win = "
                        <<100.0f*nChange/nPlyGm<<"%"<<endl;
                    break;}
            case 1:{    
                //Declare variables here
                int nRows,//Number of Rows
                    nCols;//Number of Colunns
                float aspR8io;//Aspect Ratio

                //Initialize variables here
                aspR8io=2;
                cout<<"This program displays a Square"<<endl;
                cout<<"Input the dimensions from 1 to 15"<<endl;
                do{
                    cin>>nRows;
                    nCols=aspR8io*nRows;
                }while(!(nRows>=1 && nRows<=15));

                //Display the results
                cout<<endl;
                for(int row=1;row<=nRows;row++){
                    for(int col=1;col<=nCols;col++){
                        cout<<"X";
                    }
                    cout<<endl;
                }
                cout<<endl;
                break;}
            case 2:{
                //Declare variables here
                unsigned int range,//Range of values to guess [1-2Bil]
                            nGuess,//Total guesses allowed to win
                             value,//Value to guess
                           counter,//Count the number of guesses
                          usrGuess;//The users guess

                //Initialize variables here
                cout<<"Find a random number by guessing"<<endl;
                cout<<"You will be given a certain number of Guesses "<<endl;
                cout<<"Based upon the range of values to select from "<<endl;
                cout<<"For instance, a range of 1000 you will only have 10 guesses"<<endl;
                cout<<"Choose your range from 1 to 2 Billion"<<endl<<endl;
                cin>>range;
                nGuess=log(range)/log(2)+1;//Number of Guesses
                value=rand()%range+1;      //Range of the value to guess
                counter=0;

                //Map inputs to outputs here, i.e. the process
                do{
                    cout<<"Input a guess"<<endl;
                    cin>>usrGuess;
                    counter++;
                    if(usrGuess>value){
                        cout<<"The guess was high"<<endl<<endl;
                    }else if(usrGuess<value){
                        cout<<"The guess was low"<<endl<<endl;
                    }else{
                        cout<<endl<<"Congratulations, you solved the puzzle"<<endl<<endl;
                    }
                }while(counter<=nGuess && value!=usrGuess);

                //Display the results
                cout<<endl<<"Solution Statistics"<<endl;
                cout<<"The range of possible values = [1-"<<range<<"]"<<endl;
                cout<<"The allowed number of guesses = "<<nGuess<<endl;
                cout<<"The value to find = "<<value<<endl;
                cout<<"The number of guesses = "<<counter<<endl;
                cout<<"The final user guess = "<<usrGuess<<endl;
                break;}
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