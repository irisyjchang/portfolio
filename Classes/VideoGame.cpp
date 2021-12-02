#include "VideoGame.h"

int VideoGame::getRating(){
  return rating;
}

void VideoGame::setRating(int inRating){
  rating = inRating;
}

char* VideoGame::getPublisher(){
  return publisher;
}

void VideoGame::setPublisher(char* inPublisher){
  strcpy(publisher, inPublisher);
}
