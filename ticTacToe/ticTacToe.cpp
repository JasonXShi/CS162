/**
Jason Shi
This program allows you to play ticTacToe 
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
  while{stillPlaying){
    while(!checkWin(X_MOVE) && !checkWin(O_MOVE) && !checkTie()){
      
    }
  }
}
