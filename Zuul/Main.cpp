// Zuul by Iris Chang 1/5/22 ~ A text based adventure in a fun plaza with numerous different restaurants.
#include <string.h>
#include "Room.h"
#include "Door.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{

  // alert game introduction for user
  cout << "You can navigate through the plaza and explore the different restaurants. \nYou only get once chance in each restaurant because the line for each restaurant is super long and there is no time for you to wait! \nYour inventory is limited to 1 item as it would be difficult to open the doors with multiple items in your hands! \nHence, each restaurant will have one item as well! \nYour goal is to feast on the most popular item in the plaza! \nHave fun!\n";
  Room* rooms[15];
  vector <Door*> plaza;

  rooms[0] = new Room ("You are currently in Tim Horton. Eat a bagel!", "");
  rooms[1] = new Room ("You are currently in Chipotle. Eat a burrito!", "burrito");
  rooms[2] = new Room ("You are currently in Taco Bell. Eat a quesadilla!", "");
  rooms[3] = new Room("You are currently in Starbuck. Drink a coffee!", "coffee");
  rooms[4] = new Room("You are currently in Arby. Eat a sandwich!", "sandwich");
  rooms[5] = new Room("You are currently in Krispey Kreme. Eat a donut!", "");
  rooms[6] = new Room("You are currently in Jamba Juice. Drink a smoothie!", "");
  rooms[7] = new Room("You are currently in Panda Express. Eat a dumpling!", "");
  rooms[8] = new Room("You are currently in Ihop. Eat a pancake!", "pancake");
  rooms[9] = new Room("You are currently in Olive Garden. Eat a pasta!", "");
  rooms[10] = new Room("You are currently in Auntie Anne. Eat a pretzel!", "");
  rooms[11] = new Room("You are currently in Papa John. Eat a pizza!", "");
  rooms[12] = new Room("You are currently in Shake Shack. Drink a milkshake!", "");
  rooms[13] = new Room("You are currently in Carl Jr. Eat a burger!", "");
  rooms[14] = new Room("You are currently in Mcdonald. Eat a fry!", "fry");

  // hashmap
  plaza.push_back(new Door(rooms[0],rooms[1]));
  plaza.push_back(new Door(rooms[1],rooms[2]));
  plaza.push_back(new Door(rooms[2],rooms[5]));
  plaza.push_back(new Door(rooms[3],rooms[6]));
  plaza.push_back(new Door(rooms[4],rooms[3]));
  plaza.push_back(new Door(rooms[5],rooms[4]));
  plaza.push_back(new Door(rooms[6],rooms[7]));
  plaza.push_back(new Door(rooms[7],rooms[8]));
  plaza.push_back(new Door(rooms[8],rooms[11]));
  plaza.push_back(new Door(rooms[9],rooms[12]));
  plaza.push_back(new Door(rooms[10],rooms[9]));
  plaza.push_back(new Door(rooms[11],rooms[10]));
  plaza.push_back(new Door(rooms[12],rooms[13]));
  plaza.push_back(new Door(rooms[13],rooms[14]));

  Room* itCurrent = rooms[0];
  char* inventory = 0;

  bool game = true;
  while (game){
    int option;
    for(vector<Door*>::iterator it = plaza.begin(); it != plaza.end();it++){
	    if (itCurrent == (*it)->roomIn){
	      cout << itCurrent->description << endl;
        cout << "Item: " << itCurrent->item << endl;
	      cout << "Enter next room? 0 (yes) or 1 (no) " << "\nQuit? (2) yes " << endl;
	      cin >> option;
	      if (option == 0){
          itCurrent = (*it)->roomOut;
          break;
	      } else if (option == 1) {
	        if (strcmp(itCurrent->item, "") != 0){
	          cout << "Pick up item? 0 (yes) or 1 (no) " << endl;
	          cin >> option;
            // check for full inventory
	          if (option == 0){
		          if ((strcmp(inventory, "") == 0)){
                inventory = const_cast<char *>(itCurrent->item);
                // condition
                if (strcmp(itCurrent->item, "pancake") == 0){
                  cout << "WIN\n" << endl;
                  exit(0);
                }
                itCurrent->item = ""; 
              }else{
                cout << "Full inventory... drop item? 0 (yes) or 1 (no) ";
                cin >> option;
                if(option == 0){
                  // check for full room
                  if (itCurrent->item == ""){
                   itCurrent->item = inventory;
                   inventory = 0;
                  }else{
                    cout << "Full room...swap item? 0 (yes) or 1 (no) ";
                    cin >> option;
                    if (option == 0){
                      char* temporary = inventory;
                      inventory = const_cast<char *>(itCurrent->item);
                      // condition
                      if (strcmp(itCurrent->item, "pancake") == 0){
                        cout << "WIN\n" << endl;
                        exit(0);
                      }
                      itCurrent->item = temporary;
                    }
                  }
                }
              }
	          } 
          } else {
            cout << "Drop item? 0 (yes) or 1 (no) ";
            cin >> option;
            if (option == 0){
              // check for empty inventory
              if (inventory == 0){
                cout << "Empty inventory...";
              } else if (inventory != 0){
                itCurrent->item = inventory;
                inventory = 0;
              }
            }
          }
        } else if (option == 2){
        exit(0);
        }
      }
    }
  }
  return 0;
}



