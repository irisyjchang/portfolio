#pragma once
#include "Student.h"

class Node{
 public:
  Node* getNext();
  Student* getStudent();
  void setNext(Node*);
  
  Node(Student*);
  ~Node();
  
 private:
  Student* student;
  Node* next;
};
