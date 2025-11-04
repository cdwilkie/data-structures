/* A DustinLinkedList is custom LinkedList class
*/
template <typename T>
struct Node {
   Node* head;
   Node* tail;
   T data;
};

template <typename T>
class DustinLinkedList {

   public:
      DustinLinkedList();
      ~DustinLinkedList();
      void pushBack(T);
      void insertAt(T, size_t);
      T popBack();
      T popAt(size_t);

   private:


};