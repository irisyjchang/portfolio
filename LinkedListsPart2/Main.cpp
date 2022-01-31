#include <iostream>
#include "Node.h"

using namespace std;

Node* addNode()
 {
   Student* student = new Student();
   cout << "First Name: " << endl;
   cin >> student->firstName;
   cin.ignore();
   cout << "Last Name: " << endl;
   cin >> student->lastName;
   cin.ignore();
   cout << "ID: " << endl;
   cin >> student->id;
   cout << "GPA: " << endl;
   cin.ignore();
   cin >> student->gpa;
   cin.ignore();
   Node* node = new Node(student);
   return node;
  }

 void print(Node* node)
{
  if (node != NULL){
      	cout << node->getStudent()->firstName << endl;
	cout << node->getStudent()->lastName << endl;
	cout << node->getStudent()->id << endl;
	cout << node->getStudent()->gpa << endl;
	print (node->getNext());
      }
}

int main(){
  Node* head = NULL;
  char input[10];
  while (true){
    cout << "QUIT/ADD/PRINT/AVERAGE" << endl;
    cin >> input;
    cin.ignore();
    if (strcmp (input, "QUIT") == 0){
      break;
    }else if (strcmp(input, "ADD") == 0){
      Node* node;
      node = addNode();
      node->setNext(head);
      head = node;
  }else if (strcmp(input, "PRINT") == 0){
      print(head);      
}else if (strcmp(input, "AVERAGE") == 0){
    }else{
      cout << "ERROR" << endl;
    }
}
  return 0;
}
