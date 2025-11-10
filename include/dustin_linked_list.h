#ifndef DUSTIN_LINKED_LIST_H
#define DUSTIN_LINKED_LIST_H

#include <iostream>

template <typename T>
class DustinLinkedList {

   private:
      struct Node {
         Node* nextNode;
         Node* prevNode;
         T data;
         Node(const T& inputData): 
               nextNode(nullptr),
               prevNode(nullptr),
               data(inputData){};
      };

      Node* headNode;
      Node* tailNode;
      size_t currentSize;

   public:
      DustinLinkedList();
      //DustinLinkedList(const T& newData);
      ~DustinLinkedList();

      void pushBack(const T& newData);
      void pushFront(const T& newData);
      void printList();

      void removeData();
      int32_t getData();

      void deleteList();



   


};
#include "../src/dustin_linked_list.tpp"
#endif