#pragma once
#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;


class Node {
    public:
    Node();
    ~Node(); 
    void setNext(Node*);
    Node(Student*);
    Node* getNext();
    Student* getStudent();
    
    
    private:
    Node* next;
    Student* stdinfo;
};
