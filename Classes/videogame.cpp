#include <iostream>
#include <cstring>
#include "digitalMedia.h"

using namespace std;

videogame::videogame(char* newPublisher, float newRating): digitalMedia(newTitle, newYear){
  publisher = newPublisher;
  rating = newRating;
}

char* videogame::getPublisher(){
  return publisher;
}

float videogame::getRating(){
  return rating;
}
