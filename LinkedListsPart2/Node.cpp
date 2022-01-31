#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(Student* info){
    next = NULL;
    stdinfo = info;
}

Node::~Node(){
    delete stdinfo;
    next = NULL;
}

Student* Node::getStudent() {
   return stdinfo;
}

void Node::setNext(Node* newnext){
    next = newnext;
}

Node* Node::getNext(){
    return next;
}
