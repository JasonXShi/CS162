/*
 *Jason Shi
 *
 *
 */
#include <cstring>
#include <iostream>
using namespace std;
int main(){
  //take input
  char input[80];
  char forward[80];
  char backward[80];
  cin.get(input, 80);
  cin.get();
  //remove punctuation and spaces
  int count = 0;
  for(int i = 0; i<strlen(input); i++){
    if(isalpha(input[i]) || isdigit(input[i])){
      if(input[i] != '\0')
	forward[count] = tolower(input[i]);
	count++;
    }
  }
  //flip backwards
  count = 0;
  for(int i = strlen(forward); i>0; i--){
    backward[i-1] = forward[count];
    count++;
  }
  //compare strings
 
    if(strcmp(forward, backward)==0)
      cout << "This string is a palindrome.";
    else
      cout << "This string is not a palindrome.";
  //end program
  return 0;
}
