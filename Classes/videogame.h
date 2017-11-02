#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include "digitalMedia.h"
#include <iostream>
#include <cstring>
using namespace std;

class videogame:public digitalMedia{
 public:
  videogame(char*, float);
  char* getPublisher();
  float getRating();
 private:
  char* publisher;
  float rating;
}

#endif
