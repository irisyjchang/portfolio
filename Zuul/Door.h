#include "Room.h"
using namespace std;

class Door{
 public:
  Room* roomIn;
  Room* roomOut;
  Door(Room* roomIn, Room* roomOut);
};
