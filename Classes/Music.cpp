#include "Music.h"

int Music::getDuration(){
  return duration;
}

void Music::setDuration(int inDuration){
  duration = inDuration;
}

char* Music::getArtist(){
  return artist;
}

void Music::setArtist(char* inArtist){
  strcpy(artist, inArtist);
}

char* Music::getPublisher(){
  return publisher;
}

void Music::setPublisher(char* inPublisher){
  strcpy(publisher, inPublisher);
}
