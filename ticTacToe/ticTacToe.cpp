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
void gameFinish(int board[3][3], int xWins, int oWins);

int main(){
  int board[3][3];
  for(int r=0;r<3;r++){
    for(int c=0;c<3;c++){
      board[r][c]=0;
    }
  }
  int BLANK = 0;
  int X_MOVE = 1;
  int O_MOVE = 2;
  int X_TURN = 0;
  int O_TURN= 1;
  int turn = X_TURN;
  int xWins = 0;
  int oWins = 0;
  char input[3];
  bool stillPlaying = true;
  while(stillPlaying){
    while(!checkWin(board, X_MOVE) && !checkWin(board, O_MOVE) && !checkTie(board)){
      printBoard(board);
      cout << "Enter move: ";
      cin >> input;
      input[2] = '\0';
      int row = input[0]-'a';
      int column =input[1]-'1';
      cout << input[0]-'a'<<","<<input[1]-1;
      if(board[row][column] == BLANK){
	if(turn == X_TURN){
	  board[row][column] = X_MOVE;
	  turn = O_TURN;
	}else{
	  board[row][column] = X_MOVE;
	  turn = X_TURN;	
	}
      }else{
	cout << "There is already a piece there. Choose another spot: ";
      }
    }
    printBoard(board);
    if(checkWin(board, X_MOVE)){
      cout << "X Wins!";
      xWins++;
      gameFinish(board, xWins, oWins);
    }else if(checkWin(board, O_MOVE)){
      cout << "O Wins!";
      oWins++;
      gameFinish(board, xWins, oWins);
    }else if(checkTie(board)){
      cout << "There is a tie.";
      gameFinish(board, xWins, oWins);
    }
    cout << "Play again?";
    char playAgain[2];
    playAgain[1] = '\0';
    cin >> playAgain;
    if(playAgain[0] == 'y'){
      
    }else{
      stillPlaying = false;
      cout << "Thanks for playing!";
    }
  }
}
bool checkWin(int board[3][3], int player){
  for(int row = 0; row<3; row++){
    if(board[row][0] == player &&board[row][1] &&board[row][2] == player)
      return true; 
  }
  for(int column=0;column<3;column++){
    if(board[0][column] == player && board[1][column] && board[2][column])
      return true;
  }
  if(board[0][0] == player && board [1][1] == player && board[2][2] == player)
    return true;
  if(board[2][0]==player && board[1][1] == player && board[0][2] == player)
    return true;
}

void printBoard(int board[3][3]){
  // cout <<'\t'<<"a"<<'\t'<<"b"<<'\t'<<"c";
  // cout <<'1' <<'\t'<<board[0][0]<<'\t'<<board[1][0]<<'\t'<<board[2][0];
  
  
}

bool checkTie(int board[3][3]){
  for(int row = 0; row<3; row++){
    for(int column = 0; column<3; column++){
      if(board[row][column]==0){
	return false;
      }
    }
  }
}  
void gameFinish(int board[3][3], int xWins, int oWins){
  cout << "X has won" << xWins << " times, and O has won " << oWins << " times." << endl;
  for(int row = 0; row <3; row++){
    for(int column =0; row<3; row++){
      board[row][column] = 0;
    }
  }
}
  
