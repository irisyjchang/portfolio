#include "Media.h"

class Movie: public Media {
 private:
  int duration;
  int rating;
  char director[10];
 public:
  int getDuration();
  void setDuration(int inDuration);
  int getRating();
  void setRating(int inRating);
  char* getDirector();
  void setDirector(char inDirector[10]);
};
