#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include "digitalMedia.h"
#include <iostream>
#include <cstring>
using namespace std;

class VideoGame:public digitalMedia{
 public:
  videogame(char[] newTitle,int newYear, char[] newPublisher, float newRating);
  char* getPublisher();
  float getRating();
 private:
  char* publisher;
  float rating;
};

#endif
