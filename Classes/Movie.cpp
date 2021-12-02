#include "Movie.h"

int Movie::getRating(){
  return rating;
}

void Movie::setRating(int inRating){
  rating = inRating;
}

int Movie::getDuration(){
  return duration;
}

void Movie::setDuration(int inDuration){
  duration = inDuration;
}

char* Movie::getDirector(){
  return director;
}

void Movie::setDirector(char* inDirector){
  strcpy(director, inDirector);
}
