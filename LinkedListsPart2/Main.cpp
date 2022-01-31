#include <iostream>
#include "Node.h"

using namespace std;

void addNode(Node* currentNode, Node* node){
  if (currentNode->getNext() == NULL){
    // at the end of the linklist
    currentNode->setNext(node);
  }else if(currentNode->getNext()->getStudent()->id >= node->getStudent()->id){
    // insert in front
    node->setNext(currentNode->getNext());
    currentNode->setNext(node);
  }else{
    addNode(currentNode->getNext(), node);
  }
  
}
Node* allocateNode()
 {
   Student* student = new Student();
   cout << "First Name: ";
   cin >> student->firstName;
   cin.ignore();
   cout << "Last Name: ";
   cin >> student->lastName;
   cin.ignore();
   cout << "ID: ";
   cin >> student->id;
   cout << "GPA: ";
   cin.ignore();
   cin >> student->gpa;
   cin.ignore();
   Node* node = new Node(student);
   return node;
  }

 void print(Node* node)
{
  if (node != NULL){
      	cout << node->getStudent()->firstName << " ";
	cout << node->getStudent()->lastName << " ";
	cout << node->getStudent()->id << " ";
	cout << node->getStudent()->gpa << endl;
	print (node->getNext());
      }
}

void deleteNode(Node* node, int id){
  if (node == NULL){
    return;
  }else if (node->getNext() == NULL){
    return;
  }else if(node->getNext()->getStudent()->id == id){
    node->setNext(node->getNext()->getNext()); 
  }else{
    deleteNode(node->getNext(), id);
  }
}
float averageGPA(Node *node){
  if (node == NULL){
    return 0;
  }else{
    return averageGPA(node->getNext()) + node->getStudent()->gpa;
  }
}
int countNode (Node *node){
  if (node == NULL){
    return 0;
  }else{
    return countNode(node->getNext()) + 1;
  }
}
int main(){
  Node* head = NULL;
  char input[10];
  while (true){
    cout << "QUIT/DELETE/ADD/PRINT/AVERAGE" << endl;
    cin >> input;
    cin.ignore();
    if (strcmp (input, "QUIT") == 0){
      break;
    }else if (strcmp(input, "ADD") == 0){
      Node* node;
      node = allocateNode();
      if (head == NULL){
	head = node;
      }else if (head->getNext()==NULL){
        if (head->getStudent()->id >= node->getStudent()->id){
	  // insert before head
	  node->setNext(head);
	  head=node;
	}else{
	  // insert after head
	  head->setNext(node);
	}
      }else{
	if (head->getStudent()->id >= node->getStudent()->id){
	  // insert before head
	  node->setNext(head);
	  head=node;
	}else{
	addNode(head, node);
	}
      }
  }else if (strcmp(input, "PRINT") == 0){
      print(head);      
    } else if (strcmp (input, "DELETE") == 0) {
	int id; 
	cout << "ID: ";
	cin >> id;
	if (head == NULL){
	}else if (head->getNext() == NULL){
	     if (head->getStudent()->id == id)
	        head = NULL;
	}else{
	    if (head->getStudent()->id == id)
	      head=head->getNext();
	    else
	      deleteNode(head, id);
	}
    }else if (strcmp(input, "AVERAGE") == 0){
      int count;
      float totalGPA;
      totalGPA = averageGPA (head);
      cout << totalGPA << endl;
      count = countNode(head);
      cout << count << endl;
      cout << (totalGPA/count) << endl;
    }else{
      cout << "ERROR" << endl;
    }
  }
  return 0;
}
