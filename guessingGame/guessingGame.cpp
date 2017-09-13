#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
  while(true){
    int count = 0;
    int randNum;
    int input = 0;
    char playAgain;
    srand (time(NULL));
    randNum = rand() % 101;
    cout << "Input your guess:";
    while(true){
      cin >> input;
      count++;
      if(input>randNum){
	cout << "Too high, try again:";
      }else if(input<randNum){
	cout << "Too low, try again:";
      }else{
	cout << "Correct guess! "<<count <<" Guesses Used. Play again? (y/n)";
	cin >> playAgain;
	if(playAgain == 'y'){
	  break;
	}else if(playAgain == 'n'){
	  return(0);
	}else{
	  cout << "Not a valid entry, exiting..";
	  return(0);
	}
      }
    }
  }
}
