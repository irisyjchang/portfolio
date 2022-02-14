#include <cstddef>
#pragma once

struct Node {
  Node* next;
  int value;
};
class Linked_List {
 private:
  Node* head;
 public:
  void print();
  void addTail(int value);
  void addHead(int value);
  int removeTail();
  int removeHead();
  Linked_List();
};
