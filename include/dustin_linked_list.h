#ifndef DUSTIN_LINKED_LIST_H
#define DUSTIN_LINKED_LIST_H

template <typename T>
class DustinLinkedList {

   public:
      DustinLinkedList();
      //DustinLinkedList(const T& newData);
      ~DustinLinkedList();

      Node* getHead() const;
      Node* getTail() const;

      void insertData(const T& newData);
      void removeData();
      T getData();

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