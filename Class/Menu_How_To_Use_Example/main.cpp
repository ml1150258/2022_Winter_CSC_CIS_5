/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 12th, 2021, 10:58 AM
 * Purpose:  Basic Menu with functions and examples
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
void prob0();
void prob1();
void prob2();
void prob3();

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
        cout<<"Problem 3 - Average Score - Gaddis 9thEd Chap6 Prob11"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 0:prob0();break;
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
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

void prob0(){
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
}

void prob1(){
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
    
}

void prob2(){
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
}

int  fndLwst(int s1,int s2,int s3,int s4,int s5){
    int lowest=s1;
    if(s2<lowest)lowest=s2;
    if(s3<lowest)lowest=s3;
    if(s4<lowest)lowest=s4;
    if(s5<lowest)lowest=s5;
    return lowest;
}

float calcAvg(int s1,int s2,int s3,int s4,int s5){
    return (s1+s2+s3+s4+s5-fndLwst(s1,s2,s3,s4,s5))/4.0f;
}

void getScr(int &s1,int &s2,int &s3,int &s4,int &s5){
    //Prompt for Inputs
    cout<<"This program calculates the average score"<<endl;
    cout<<"Type in 5 integers >= 0 and <= 100"<<endl;
    cout<<"The original scores before inputing values are"<<endl;
    cout<<"Score 1 = "<<s1<<endl;
    cout<<"Score 2 = "<<s2<<endl;
    cout<<"Score 3 = "<<s3<<endl;
    cout<<"Score 4 = "<<s4<<endl;
    cout<<"Score 5 = "<<s5<<endl;   
    cout<<"Type each in individually"<<endl;
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s1;
        cout<<"You entered "<<s1<<endl;
        if(s1<0||s1>100)cout<<"This is invalid"<<endl;
    }while(s1<0||s1>100);
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s2;
        cout<<"You entered "<<s2<<endl;
        if(s2<0||s2>100)cout<<"This is invalid"<<endl;
    }while(s2<0||s2>100);
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s3;
        cout<<"You entered "<<s3<<endl;
        if(s3<0||s3>100)cout<<"This is invalid"<<endl;
    }while(s3<0||s3>100);
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s4;
        cout<<"You entered "<<s4<<endl;
        if(s4<0||s4>100)cout<<"This is invalid"<<endl;
    }while(s4<0||s4>100);
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s5;
        cout<<"You entered "<<s5<<endl;
        if(s5<0||s5>100)cout<<"This is invalid"<<endl;
    }while(s5<0||s5>100);
}

void prob3(){
    //Declare Variables
    int score1,score2,score3,score4,score5;
    
    //Initialize Variables
    score1=score2=score3=score4=score5=0;
    getScr(score1,score2,score3,score4,score5);
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout<<"These are the 5 test scores"<<endl;
    cout<<"Score 1 = "<<score1<<endl;
    cout<<"Score 2 = "<<score2<<endl;
    cout<<"Score 3 = "<<score3<<endl;
    cout<<"Score 4 = "<<score4<<endl;
    cout<<"Score 5 = "<<score5<<endl;
    cout<<"The average of the 4 highest scores = "
        <<calcAvg(score1,score2,score3,score4,score5)<<endl;
}