#include "linked_list.h"
#include <iostream>
using namespace std;

Linked_List::Linked_List()
{
  head = NULL;
}

void Linked_List::print()
{
  Node* temp = head;
  while (temp != NULL){
    cout << temp->value << " ";
    temp = temp->next;
  }
}

void Linked_List::addTail(int value)
{
  Node* node = new Node;
  Node* temp = head;
  while (temp->next != NULL){
    temp = temp->next;
  }
  temp->next=node;
}

void Linked_List::addHead(int value)
{
  
}

int Linked_List::removeTail()
{
  return 0;
}

int Linked_List::removeHead()
{
  int data = 0;
  data=head->value;
  head = head->next;
  return data;
}
