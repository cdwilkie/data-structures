#ifndef DUSTIN_LINKED_LIST_H
#define DUSTIN_LINKED_LIST_H

template <typename T>
class DustinLinkedList {

   public:
      DustinLinkedList();
      DustinLinkedList(const DustinLinkedList& copy);
      DustinLinkedList(const T[]& copy);
      ~DustinLinkedList();

   private:

      struct Node {
         Node* nextNode;
         Node* prevNode;
         T data;
      };

      Node* headNode;
      Node* tailNode;


};

#endif