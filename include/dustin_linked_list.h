#ifndef DUSTIN_LINKED_LIST_H
#define DUSTIN_LINKED_LIST_H

/* A DustinLinkedList is custom LinkedList class
*/
template <typename T>
struct Node {
   Node* head;
   Node* tail;
   T data;
   Node (const T& info) :
      head(nullptr),
      tail(nullptr),
      data(info){}
};


class DustinLinkedList {

   public:
      DustinLinkedList();
      ~DustinLinkedList();
      void pushBack(Node<T>);
      void insertAt(Node<T>, size_t);
      popBack();
      popAt(size_t);

   private:


};
#endif