#include <iostream>
#include "Node.h"

using namespace std;

 void add(Node* head, int newvalue);
 void copyHead (Node* oldHead, Node* newHead);

void addNode (Node** head, Node* node)
{
    Node* current = *head;
    if (current == NULL){
      *head = node;
    }
    else{
      while (current->getNext() != NULL){
        current = current->getNext();
      }
      current->setNext(node);
    }
}

Node* add ()
 {
   Student* student = new Student();
   cout << "First Name: " << endl;
   cin >> student->firstName;
   cout << "Last Name: " << endl;
   cin >> student->lastName;
   cout << "ID: " << endl;
   cin >> student->id;
   cout << "GPA: " << endl;
   cin >> student->gpa;
   Node* node = new Node(student);
   node->setNext(NULL);
   return node;
  }

 void print(Node* head)
{
    Node* node = head;
      while (node != NULL)
      {
	cout << node->getStudent()->firstName << endl;
	cout << node->getStudent()->lastName << endl;
	cout << node->getStudent()->id << endl;
	cout << node->getStudent()->gpa << endl;
        node = node->getNext();
      }
}

int main(){
  input char[10];
  while (True){
    cin >> input;    
    if (strcmp (input, "QUIT") == 0){
      break;
    }else if ((input, "ADD") == 0){
      Node* node;
      node = add();
      node->setNext(head);
      head = node;
    }else if ((input, "PRINT") == 0){
      print(head);      
    }else if ((input, "AVERAGE") == 0){
    }
  return 0;
}
