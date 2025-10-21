#include "../include/dynamic_array.h"

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



//-----------------------
// Unit Tests
void constructorTest() {
   std::string testGroup = "Default Constructor";
   DynamicArray array;

   std::string subTest = "Size Test";
   std::string testName = testGroup + " - " + subTest;
   bool currentTest = (array.getSize() == 0);
   printScore(currentTest, testName);

   subTest = "Capacity Test";
   testName = testGroup + " - " + subTest;
   currentTest = (array.getCapacity() == 0);
   printScore(currentTest, testName);
}//end constructorTest()

void resizeTest() {
   std::string testGroup = "Resize";
   DynamicArray array;
   array.pushBack(1);

   std::string subTest = "Size Test: 1";
   std::string testName = testGroup + " - " + subTest;
   bool currentTest = (array.getSize() == 1);
   printScore(currentTest, testName);
   printScore(array.getCapacity() == 1, "Capacity Test: 1");

   subTest = "Size Test: 2";
   testName = testGroup + " - " + subTest;
   array.pushBack(2);
   currentTest = (array.getSize() == 2);
   printScore(currentTest, testName);
   printScore(array.getCapacity() == 2, "Capacity Test: 2");

   subTest = "Size Test: 10";
   testName = testGroup + " - " + subTest;
   DynamicArray array2;
   for (int32_t i = 0; i < 10; ++i) {
      array2.pushBack(i);
   }
   currentTest = (array2.getSize() == 10);
   printScore(currentTest, testName);
   printScore(array2.getCapacity() == 16, "Capacity Test: 16");
}//end resizeTest()



int main() {

   constructorTest();
   resizeTest();
   return 0;
}