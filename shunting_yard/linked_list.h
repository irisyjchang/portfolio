struct Node {
  Node* next;
  int value;
};
class linked_list {
 private:
  Node* head;
 public:
  void print();
  void add(int value);
  void removeTail();
  void removeHead();
};
