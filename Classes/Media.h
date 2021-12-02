#pragma once // only include header once, and ignore the header if encountered a second time to avoid the duplication
#include <string.h>
using namespace std;

class Media {
 private:
  char title[10];
  int year;
 public:
  int type; // indicate child type if parent pointer is pointing to a child object
  int getYear();
  void setYear(int inYear);
  char* getTitle();
  void setTitle(char inTitle[10]);
};
