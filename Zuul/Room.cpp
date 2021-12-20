#include <string.h>
#include "Room.h"
#include <iostream>

Room::Room(char inDescription[10], char inItem[10]){
  strcpy(description, inDescription);
  strcpy(item, inItem);
}
