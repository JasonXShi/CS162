#include <iostream>
#include <vector>
#include <cstring>
#include <iterator>
using namespace std;

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
  vector<Student*> v;
  while(true){
    char input[6];
    char firstName[40];
    char lastName[40];
    int studentID;
    float gpa;
    cout << "Enter a command"<<endl;
    cin >> input;
    if(strcmp(input, "ADD") == 0){
      cout << "Enter the Student's First Name:"<<endl;
      cin >> firstName;
      cout << "Enter the Student's Last Name:"<<endl;
      cin >> lastName;
      cout << "Enter the Student's ID:"<<endl;
      cin >> studentID;
      cout << "Enter the Student's GPA" << endl;
      cin >>gpa;
      v.push_back(addStudent(firstName, lastName, studentID, gpa));
    }else if(strcmp(input, "PRINT") == 0){
      print(v);
    }else if(strcmp(input, "DELETE")==0){
      cout << "Enter the Student ID to be deleted:" << endl;
      deleteStudent(v, studentID);
    }else if(strcmp(input, "QUIT") ==0){
      break;
    }else{
      cout << "Not a valid option. Re-enter your command:";
    }
  }
}

Student* addStudent(char firstName[40], char lastName[40], int studentID, float gpa){
  Student* tempStudent = new Student();
  strcpy(tempStudent->firstName, firstName);
  strcpy(tempStudent->lastName, lastName);
  tempStudent->studentID = studentID;
  tempStudent->gpa = gpa;
  return tempStudent;
}

void print(vector<Student*> &v){
  for(vector<Student*>::iterator it = v.begin(); it != v.end(); it++){
    cout << (*it)->firstName << endl;
    cout << (*it)->lastName << endl;
    cout << (*it)->studentID << endl;
    cout << (*it)->gpa<<endl;
  }
}
void deleteStudent(vector<Student*> &v, int studentID){
  for(vector<Student*>::iterator it = v.begin(); it != v.end(); it++){
    if((*it)->studentID == studentID)
      v.erase(it);
  }
}
