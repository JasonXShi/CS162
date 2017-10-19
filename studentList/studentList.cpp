#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
void addStudent();
void print();
void deleteStudent();

struct Student{
  char firstName[15];
  char lastName[15];
  int studentID;
  float gpa;
}
;
int main(){
  char input[6]; 
  cout << "Enter a command"<<endl;;
  cin >> input;
  if(strcmp(input, "ADD") == 0){
    addStudent();
  }else if(strcmp(input, "PRINT") == 0){
    print();
  }else if(strcmp(input, "DELETE")==0){
    deleteStudent();
  }else if(strcmp(input, "QUIT") ==0){
    
  }else{
    cout << "Not a valid option. Exiting..";
  }
}

void addSudent(){
  
}

void print(){
  
}
void deleteStudent(){
  
}
