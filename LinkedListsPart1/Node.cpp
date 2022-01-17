#include "Node.h"

Node* Node::getNext(){
  return next;
}

Student* Node::getStudent(){
  return student;
}

void Node::setNext(Node* inNext){
  next = inNext;
}

Node::Node(Student* inStudent){
  student = inStudent; 
}

Node::~Node(){
}
