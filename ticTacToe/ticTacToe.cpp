/**
Jason Shi
This program allows you to play ticTacToe 
9/29/17
**/
#include <iostream>
#include <stdlib.h>
using namespace std;
bool checkWin(int board[3][3], int player);
void printBoard(int board[3][3]);
bool checkTie(int board[3][3]);
void gameFinish(int board[3][3]);

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
  bool stillPlaying = true;
  while(stillPlaying){
    while(!checkWin(board, X_MOVE) && !checkWin(board, O_MOVE) && !checkTie(board)){
      printBoard(board);
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
      cout << "There is already a piece there. Choose another spot: ";
    }
    printBoard(board);
    if(checkWin(X_MOVE)){
      cout>>"X Wins!";
      xWins++;
      gameFinish(board);
    }else if(checkWin(board, O_MOVE)){
      cout>>"O Wins!";
      gameFinish(board);
    }else if(checkTie(board)){
      cout>>"There is a tie.";
      gameFinish(board);
    }
    cout>>"Play again?";
    c.get(input[0],1);
    c.get();
    if(input[0] == 'y'){
    }else{
      stillPlaying = false;
      cout >> "Thanks for playing!";
    }
  }
}
bool checkWin(int board[3][3], int player){
  for(int row = 0; row<3; row++){
    if(board[row][column] == player &&board[row][column+1] &&board[row][column+2] == player)
      return true; 
  }
  for(int column=0;column<3;column++){
    if(board[row][column] == player && board[row+1][column] && board[row+2][column])
      return true;
  }
  if
  
}

void printBoard(int board[3][3]){
  // cout <<'\t'<<"a"<<'\t'<<"b"<<'\t'<<"c";
  // cout <<'1' <<'\t'<<board[0][0]<<'\t'<<board[1][0]<<'\t'<<board[2][0];
  
  
}

bool checkTie(int board[3][3]){
  
}

void gameFinish(){

}
