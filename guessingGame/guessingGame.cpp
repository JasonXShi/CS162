/**
Jason Shi
9/15/17
Guessing Game
Lets the user play "guessing game"
 **/

//import libraries
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
  while(true){
    //initialize variables
    int count = 0;
    int randNum;
    int input = 0;
    char playAgain;
    //find random number
    srand (time(NULL));
    randNum = rand() % 101;
    cout << "Input your guess:";
    //run game
    while(true){
      cin >> input;
      count++;
      //if number is too high or low 
      if(input>randNum){
	cout << "Too high, try again:";
      }else if(input<randNum){
	cout << "Too low, try again:";
      //if the guess is correct, prompt play again
      }else{
	cout << "Correct guess! "<<count <<" Guesses Used. Play again? (y/n)";
	cin >> playAgain;
	if(playAgain == 'y'){
	  //break and restart program
	  break;
	}else if(playAgain == 'n'){
	  //exit program
	  return(0);
	}else{
	  cout << "Not a valid entry, exiting..";
	  return(0);
	}
      }
    }
  }
}
