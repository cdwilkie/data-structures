#include <iostream>
#include "../include/dustin_linked_list.h"
#include "color.h"

int main() {

   DustinLinkedList<int> newList;
   //700 21 32 67
   
   newList.pushBack(32);
   newList.pushBack(67);
   newList.pushFront(21);
   newList.pushFront(700);
   
   newList.printList();
   
   std::cout << Color::GREEN << "TEST\n" << Color::RESET;
   std::cout << Color::RED << "TEST" << Color::RESET << std::endl;
   return 0;
}