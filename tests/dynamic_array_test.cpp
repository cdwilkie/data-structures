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
// Test constructors
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

// Test resize function
void resizeTest() {
   std::string testGroup = "Resize";
   DynamicArray array;
   array.pushBack(1);

   // Test: Add 1 element to empty
   std::string subTest = "Size Test: 1";
   std::string testName = testGroup + " - " + subTest;
   bool currentTest = (array.getSize() == 1);
   printScore(currentTest, testName);
   printScore(array.getCapacity() == 1, "Capacity Test: 1");

   // Test: Add 1 element to 1 element
   subTest = "Size Test: 2";
   testName = testGroup + " - " + subTest;
   array.pushBack(2);
   currentTest = (array.getSize() == 2);
   printScore(currentTest, testName);
   printScore(array.getCapacity() == 2, "Capacity Test: 2");

   // Test: Add 10 elements to empty
   subTest = "Size Test: 10";
   testName = testGroup + " - " + subTest;
   DynamicArray array2;
   for (int32_t i = 0; i < 10; ++i) {
      array2.pushBack(i);
   }
   currentTest = (array2.getSize() == 10);
   printScore(currentTest, testName);
   printScore(array2.getCapacity() == 16, "Capacity Test: 16");

   // Test: Remove 7 elements and resize
   subTest = "Size Test: 3";
   testName = testGroup + " - " + subTest;
   for (int32_t i = 0; i < 7; ++i) {
      array2.popBack();
   }
   printScore(array2.getSize() == 3, testName);
   printScore(array2.getCapacity() == 4, "Capacity Test: 4");
}//end resizeTest()

// Check indexing operator[]
void indexTest() {
   DynamicArray array;
   std::string testGroup = "Index Test";
   array.pushBack(1);
   std::string subTest = "Index[0]: 1";
   std::string testName = testGroup + " - " + subTest;
   bool currentTest = (array[0] == 1);
   printScore(currentTest, testName);

   array.pushBack(2);
   subTest = "Index[1]: 2";
   testName = testGroup + " - " + subTest;
   currentTest = (array[1] == 2);
   printScore(currentTest, testName);

   DynamicArray array2;
   for (size_t i = 0; i < 100; ++i) {
      array2.pushBack(i);
   }
   subTest = "Index[size-1]: 99";
   testName = testGroup + " - " + subTest;
   currentTest = (array2[array2.getSize()-1] == 99);
   printScore(currentTest, testName);
}// end indexTest()

int main() {

   constructorTest();
   resizeTest();
   indexTest();
   return 0;
}// end main()