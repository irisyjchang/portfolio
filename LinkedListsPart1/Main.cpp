#include <iostream>
#include "Student.h"
#include "Node.h"

int main(){

  Node* node1;
  Student* student1;
  student1 = new Student();
  node1 = new Node(student1);
  
  Node* node2;
  Student* student2;
  student2 = node1->getStudent();

  Node* node3;
  node1->setNext(node1);
  node3 = node1->getNext();
  
  delete student1;
  delete node1;
  return 0;
  
}
