#pragma once // only include header once, and ignore the header if you encounter it a second time to avoid the duplication
#include <string.h>
using namespace std;

class Media {
 private:
  char title[10];
  int year;
 public:
  int type;
  int getYear();
  void setYear(int inYear);
  char* getTitle();
  void setTitle(char inTitle[10]);
};
