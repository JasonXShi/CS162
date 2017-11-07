#include "digitalMedia.h"
#include "videogame.h"
#include "movie.h"
#include "music.h"
#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>
using namespace std;

int main(){
  vector<digitalMedia*> v;
  cout << "Enter 'ADD' to Add Media" << endl;
  cout << "Enter 'DELETE' to Delete an item" << endl;
  cout << "Enter 'SEARCH' to Search for Objects in the Database" << endl;
  cout << "Enter 'QUIT' to exit the program" << endl;
  while(true){
    char input[7];
    char mediaType[10];
    char title[150];
    int year;
    //get input for commands
    cout << "Enter a command: "<<endl;
    cin >> input;
    if(strcmp(input, "ADD") == 0){
      //enter a new student's information if they input ADD
      cout << "Enter the Type of Media (VIDEOGAME, MOVIE, MUSIC):"<<endl;
      cin >> mediaType;
      cout << "Enter the Title: " << endl;
      cin >> title;
      cout << "Enter the Year: "<< endl;
      cin >> year;
      if(strcmp(mediaType, "VIDEOGAME") == 0){
	char publisher[50];
	float rating;
	cout << "Enter the Name of the Publisher: " << endl;
	cin >> publisher;
	cout << "Enter the Rating: " << endl;
	cin >> rating;
  digitalMedia* temp = new videogame(title, year, publisher, rating);
	v.push_back(temp);
      }else if(strcmp(mediaType, "MOVIE") == 0){
	char director[50];
	int duration;
	float rating;
	cout << "Enter the Name of the Director of the Movie:"<< endl;
	cin >> director;
	cout << "Enter the Duration of the Movie in Minutes: "<< endl;
	cin >> duration;
	cout << "Enter the Rating of the Movie (1-5 Stars): " <<endl;
	cin >> rating;
  //videogame* temp = new videogame(title, year, publisher, rating);
  //v.push_back(temp);
      }else if(strcmp(mediaType, "MUSIC") == 0){
	char artist[50];
	int duration;
	char publisher[50];
	cout << "Enter the name of the Artist: " <<endl;
	cin >> artist;
	cout << "Enter the Duration of the Song (in seconds): " <<endl;
	cin >> duration;
	cout << "Enter the Publisher: " << endl;
	cin >> publisher;
  //music* temp = new videogame(title, year, publisher, rating);
  //v.push_back(temp);
      }else{
	cout << "Invalid media type.." <<endl;
      }
    }else if(strcmp(input, "SEARCH") == 0){
      cout << "Search by Title or Year? (TITLE, YEAR): " << endl;

    }else if(strcmp(input, "DELETE")==0){

    }else if(strcmp(input, "QUIT") ==0){
      //end on quit
      break;
    }else{
      cout << "Not a valid option. ";
    }
  }
}
