#include <string.h>
#include "Media.h"
#include <iostream>

int Media::getYear(){
  return year;
}

void Media::setYear(int inYear){
  year = inYear;
}

char* Media::getTitle(){
  return title;
}

void Media::setTitle(char* inTitle){
  strcpy(title, inTitle);
}

