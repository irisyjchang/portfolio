#include "queue.h"
#include "stack.h"

int main()
{
  Queue* queue = new Queue();
  queue->enqueue(1);
  queue->enqueue('+');
  queue->enqueue(2);
  queue->print();
  return 0;
}
