#include "Media.h"

class VideoGame: public Media {
 private:
  int rating;
  char publisher[10];
 public:
  int getRating();
  void setRating(int inRating);
  char* getPublisher();
  void setPublisher(char inPublisher[10]);
};
