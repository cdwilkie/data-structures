#include "../include/dustin_string.h"

#include <iostream>
/* Displays a green pass or red fail to terminal
* based on test condition
*/
void printScore(bool testCondition, const std::string testName) {
   if (testCondition) {
      std::cout << "\033[32m" << " PASS " << testName << "\033[0m\n";
   }
   else {
      std::cout << "\033[31m" << " FAIL " << testName << "\033[0m\n";
   }
}//end printScore()

void constructorTest() {
   DustinString newString;

   printScore(newString.length() == 0, "Constructor Test");
   printScore(newString.getCapacity() == 0, "Capacity Test");

   DustinString newString2 = DustinString("Hello");
   printScore(newString2.length() == 5, "Constructor Test 2");
   printScore(newString2.getCapacity() == 6, "Capacity Test 2");

   DustinString newString3 = DustinString(" ");
   printScore(newString3[newString3.length()] == '\0', "Constructor Test 3");

   const char* dustinPtr = "GothamCity";
   DustinString newString4 = DustinString(dustinPtr);
   printScore(newString4.length() == 10, "Constructor Test 4");
   printScore(newString4.getCapacity() == 11, "Capacity Test 4");
   printScore(newString4[newString4.length()] == '\0', "Copy Test 4");
}

int main() {

   std::cout <<"Testing Dustin String\n";
   try {
      constructorTest();
   }
   catch (const char* msg) {
      std::cout << msg << std::endl;
   }

   return 0;
}