#ifndef DIGITALMEDIA_H
#define DIGITALMEDIA_H
#include <iostream>
#include <cstring>

using namespace std;

class digitalMedia{
public:
  digitalMedia(char newTitle[], int newYear);
  digitalMedia();
  char* getTitle();
  int getYear();
private:
  char* title;
  int year;
};

#endif
