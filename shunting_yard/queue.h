#include "linked_list.h"
#pragma once

class Queue: public Linked_List
{
 public:
  void enqueue(int value);
  int dequeue();
};
