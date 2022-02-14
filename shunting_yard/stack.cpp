#include "stack.h"

void Stack::push(int value)
{
  addHead(value);
}

int Stack::pop()
{
  return removeHead();
}
