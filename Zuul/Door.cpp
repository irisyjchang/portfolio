#include "Door.h"
#include <iostream>

Door::Door(Room* inRoomIn, Room* inRoomOut){
  roomIn = inRoomIn;
  roomOut = inRoomOut;
}
