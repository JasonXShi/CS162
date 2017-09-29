/**
Jason Shi
This program allows you to play ticTacToe 
9/29/17
**/
#include <iostream>
#include <stdlib.h>
using namespace std;
boolean checkWin(int player);
void printBoard();
boolean checkTie();
void gameFinish();

int main(){
  int board[3][3];
  int BLANK = 0;
  int X_MOVE = 1;
  int O_MOVE = 2;
  int X_TURN = 0;
  int O_TURN= 1;
  int turn = X_TURN;
  int xWins = 0;
  int oWins = 0;
  char input[2];
  boolean stillPlaying = true;
  while(stillPlaying){
    while(!checkWin(X_MOVE) && !checkWin(O_MOVE) && !checkTie()){
      printBoard();
      cout << "Enter move: ";
      cin.get(input, 2);
      cin.get();
      int row = tolower(input[0])-'a';
      int column =tolower(input[1])-1;
      if(board[row][column] == BLANK){
	if(turn == X_TURN){
	  board[row][column] = X_MOVE;
	  turn = O_TURN;
	}else{
	  board[row][column] = X_MOVE;
	  turn = X_TURN;	
	}
      }
    }
  }
}
boolean checkTin(int player){

}

void printBoard(){

}

boolean checkTie(){
  
}

void gameFinish(){

}
