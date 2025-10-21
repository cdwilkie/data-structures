#include "../include/dynamic_array.h"

#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>

/* Displays a green pass or red fail to terminal
* based on assert test
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
   DynamicArray array;

   std::string testName = "Default Constructor Size Test";
   bool currentTest = (array.getSize() == 0);
   printScore(currentTest, testName);

   testName = "Default Constructor Capacity Test";
   currentTest = (array.getCapacity() == 0);
   printScore(currentTest, testName);
}

int main(int argc, char** argv) {

   /*
   std::cout << "Loading Test Framework...\n";
   std::string fileName = 
         (argc < 2) ? "testData.txt" : argv[1];
   std::ifstream testFile(fileName);
   if (!testFile.is_open()) {
      std::cout << "Error loading framework. Aborted\n" << std::endl;
      return 1;
   }

   std::cout << "Building Test Framework...\n";
   std::vector<std::string> testList;
   std::string testItem;
   while(std::getline(testFile, testItem)) {
      testList.push_back(testItem);
   }


   std::cout << "Running Test Framework...\n";
    
   DynamicArray testArray;
   while (testList.size() > 0) {
      switch
   }

   std::cout << "All testing has concluded.\n";
   */


   constructorTest();
   return 0;
}