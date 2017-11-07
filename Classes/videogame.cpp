#include <iostream>
#include <cstring>
#include "game.h"

using namespace std;

videogame::videogame(char[] newTitle, int newYear, char[] newPublisher, float newRating) : digitalMedia(newTitle, newYear){
  publisher = newPublisher;
  rating = newRating;
}

char* videogame::getPublisher(){
  return publisher;
}

float videogame::getRating(){
  return rating;
}
