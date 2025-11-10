#include <iostream>
#include "../include/dustin_linked_list.h"

int main() {

   DustinLinkedList<int> newList;
   //700 21 32 67
   newList.pushBack(32);
   newList.pushBack(67);
   newList.pushFront(21);
   newList.pushFront(700);

   newList.printList();

   return 0;
}