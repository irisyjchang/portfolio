#include "Media.h"

class Music: public Media {
 private:
   int duration;
  char publisher[10];
  char artist[10];
 public:
  int getDuration();
  void setDuration(int inDuration);
  char* getPublisher();
  void setPublisher(char inPublisher[10]);
  char* getArtist();
  void setArtist(char inArtist[10]);
};
