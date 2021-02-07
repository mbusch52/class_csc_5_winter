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
    char redoA, redoB, redoC;// re-roll up to three dice
    char roll;// determine if they want to re-roll
    //Initialize Variables
    do{// start of game 
        diceA = (rand()%6+1);// set the dice roll to a random number 1-6
        diceB = (rand()%6+1);
        diceC = (rand()%6+1);
        diceD = (rand()%6+1);
        diceE = (rand()%6+1);
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
        cout << "dice1" << setw(7) << "dice2" << setw(7) << "dice3" << setw(7) << "dice4" << setw(7) << "dice5" << endl;// making dice
        cout << "-----" << setw(7) << "-----" << setw(7) << "-----" << setw(7) << "-----" << setw(7) << "-----" <<  endl;
        cout << "|   |" << setw(7) << "|    |" << setw(7) << "|    |" << setw(7) << "|   |" << setw(7) << "|   |"  << endl;
        cout << "|" << setw(2) << diceA << setw(2)  << "|" << setw(2);
        cout << "|" << setw(2) << diceB << setw(3)  << "|" << setw(2);
        cout << "|" << setw(2) << diceC << setw(3)  << "|" << setw(3);
        cout << "|" << setw(2) << diceD << setw(2)  << "|" << setw(3);
        cout << "|" << setw(2) << diceE << setw(2)  << "|" << setw(2) << endl;
        cout << "|   |" << setw(7) << "|    |" << setw(7) << "|    |" << setw(7) << "|   |" << setw(7) << "|   |"  << endl;
        cout << "-----" << setw(7) << "-----" << setw(7) << "-----" << setw(7) << "-----" << setw(7) << "-----"  << endl;
        
        
    // chose if you want to re roll any of the dice up to three
        cout << "Do you want to re-roll any dice enter y or n" << endl;// determine if player wants any re-rolls
        cin >> roll;
        
        
        if(roll == 'y'|| roll == 'Y'){// reroll dice
            for (int i = 0; i<3; i++){//loop to run re-roll up to 3 times if the user wants
            char dice1, dice2, dice3, dice4, dice5;  // dice to re-roll
            char numdice;// number of dice to reroll
            cout << "enter the number of dice you want to re-roll \n";
            cin >> numdice;
                switch(numdice){
                    case '0':i = 3;break;
                    case '1':{
                        cout << "enter the number of the dice you wish to re-roll\n";
                        cin >> dice1;
                        if (dice1 = 1)diceA = dice1;
                        else if(dice1 = 2)diceB =dice1;
                        else if(dice1 = 3)diceC =dice1;
                        else if(dice1 = 4)diceD =dice1;
                        else diceE = dice1;
                        break;
                    }
                
                }
            }
           
            
        }
     
        

        cout << " Enter y if you wish to continue the game and n if you do not.\n";// determine if you should re run the loop or not
        cin >> answer;
    }  while(answer != 'N' && answer !='n');
    //Exit stage right!
    return 0;
}