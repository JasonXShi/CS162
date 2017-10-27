/*
Jason Shi
This program allows you to make students and store their information
10/24/17
*/
#include <iostream>
#include <vector>
#include <cstring>
#include <iterator>
#include <iomanip>
using namespace std;

//make struct for students
struct Student{
  char firstName[40];
  char lastName[40];
  int studentID;
  float gpa;
};

Student* addStudent(char firstName[40], char lastName[40], int studentID, float gpa);
void print(vector<Student*> &v);
void deleteStudent(vector<Student*> &v, int studentID);

int main(){
  //make vector of students
  vector<Student*> v;
  cout << "Enter 'ADD' to add a student" << endl;
  cout << "Enter 'DELETE' to delete a student" << endl;
  cout << "Enter 'PRINT' to print all the students" << endl;
  cout << "Enter 'QUIT' to exit the program" << endl;
  while(true){
    char input[6];
    char firstName[40];
    char lastName[40];
    int studentID;
    float gpa;
    //get input for commands 
    cout << "Enter a command: "<<endl;
    cin >> input;
    if(strcmp(input, "ADD") == 0){
      //enter a new student's information if they input ADD
      cout << "Enter the Student's First Name:"<<endl;
      cin >> firstName;
      cout << "Enter the Student's Last Name:"<<endl;
      cin >> lastName;
      cout << "Enter the Student's ID:"<<endl;
      cin >> studentID;
      cout << "Enter the Student's GPA" << endl;
      cin >>gpa;
      //add student to vector
      v.push_back(addStudent(firstName, lastName, studentID, gpa));
    }else if(strcmp(input, "PRINT") == 0){
      //cout everything in the vector
      print(v);
    }else if(strcmp(input, "DELETE")==0){
      //enter a student ID and delete that student
      cout << "Enter the Student ID to be deleted:" << endl;
      cin >> studentID; 
      deleteStudent(v, studentID);
    }else if(strcmp(input, "QUIT") ==0){
      //end on quit
      break;
    }else{
      cout << "Not a valid option. ";
    }
  }
}

Student* addStudent(char firstName[40], char lastName[40], int studentID, float gpa){
  //make a temporary Student and return it, so it can be added to the vector
  Student* tempStudent = new Student();
  strcpy(tempStudent->firstName, firstName);
  strcpy(tempStudent->lastName, lastName);
  tempStudent->studentID = studentID;
  tempStudent->gpa = gpa;
  return tempStudent;
}

void print(vector<Student*> &v){
  //print 2 decimal places for floats
  cout.setf(ios::fixed);
  //from stackoverflow - https://goo.gl/FihDAj
  cout.precision(2);
  //print everything in the vector
  for(vector<Student*>::iterator it = v.begin(); it != v.end(); it++)
    //iterator from https://stackoverflow.com/questions/2395275/how-to-navigate-through-a-vector-using-iterators-c
    cout << (*it)->firstName << " " << (*it)->lastName << ", " << (*it)->studentID << ", " << (*it)->gpa << endl;
}
//thx kevin for helping me
void deleteStudent(vector<Student*> &v, int studentID){
  //iterate through the vector
  for(vector<Student*>::iterator it = v.begin(); it != v.end(); it++){
    //if the studentID matches, then delete the data and struct from the vector
    if((*it)->studentID == studentID){
      delete *it;
      v.erase((it));
      break;
    }
  }
}

