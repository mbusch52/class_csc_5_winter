/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototype

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
      srand(static_cast<unsigned int>(time(0)));// seed time to a random number determined by seconds passed since jan 1 1970
    //Declare Variable Data Types and Constants
    char answer;// answer to if you wna t to run the game again
    unsigned short diceA, diceB, diceC, diceD, diceE; // dive dice used in a game of yahtzee
    //Initialize Variables
    do{// start of game 
        diceA = (rand()%6+1);// set the dice roll to a random number 1-6
        diceB = (rand()%6+1);
        diceC = (rand()%6+1);
        diceD = (rand()%6+1);
        diceE = (rand()%6+1);
        
        
        
    //Process or map Inputs to Outputs
    
    //Display Outputs
        cout << diceA << setw(3) << diceB << setw(3)<< diceC << setw(3)<< diceD << setw(3) << diceE << endl;// display dice rolls
        cout << " Enter y if you wish to continue the game and n if you do not.\n";// determine if you should re run the loop or not
        cin >> answer;
    }  while(answer != 'N' && answer !='n');
    //Exit stage right!
    return 0;
}