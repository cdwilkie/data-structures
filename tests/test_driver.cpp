#include "../include/dynamic_array.h"

#include <iostream>
#include <cassert>

void testConstructors() {
   // Dynamic Array Default Constructor
   DynamicArray arr;
   assert(arr.getSize() == 0);
   std::cout << " Default constructor passed \n";
}

int main() {

   std::cout << "Running some tests...\n";
   testConstructors();
   std::cout << "All testing has concluded.\n";



   return 0;
}