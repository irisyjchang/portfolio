#include "linked_list.h"
#pragma once

class Stack: public Linked_List
{
 public:
  void push(int value);
  int pop();
};
