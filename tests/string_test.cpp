#include "../include/dustin_string.h"

#include <iostream>


int main() {

   std::cout <<"Testing Dustin String\n";

   DustinString newString = "Hello";

   for (size_t i = 0; i < newString.length; ++i) {
      std::cout << newString[i];
   }
   std::cout << std::endl;
   return 0;
}