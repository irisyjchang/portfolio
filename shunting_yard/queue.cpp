#include "queue.h"

void Queue::enqueue(int value)
{
  addTail(value);
}

int Queue::dequeue()
{
  return removeHead();
}
