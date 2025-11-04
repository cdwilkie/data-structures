#include "../include/dustin_string.h"
#include <iostream>

DustinString::DustinString()
   : length(0), capacity(0), data(nullptr) {
}

/* Constructor expects null terminated string
*/
DustinString::DustinString(const char* charArr) {
   if (charArr) {
      length = findLength(charArr);
      capacity = length + 1;
      data = new char[capacity];
      for (size_t i = 0; i < capacity; ++i) {
         data[i] = charArr[i];
      }//end for copy data
   }//end if arr
}//end DustinString()

DustinString::~DustinString() {
   delete[] data;
}



size_t DustinString::getCapacity() const {
   return capacity;
}

size_t DustinString::getLength() const { 
   return length;
}

char& DustinString::operator[](size_t index) {
   
   if (index >= length) {
      throw "Index out of bounds";
   }
   return data[index];
   
   
}

void DustinString::resizeArray(size_t newCapacity) {

}

// Assumes all string literals are null terminated '\0'
size_t DustinString::findLength(const char* arr) {
   size_t length = 0;
   while (arr[length] != '\0') {
      ++length;
   }//end while null notfound
   return length;
}//end findLength()

void DustinString::copyArray(const char* arr) {
   if (arr) {
      size_t arrLength = findLength(arr);
      size_t arrCapacity = arrLength +1;
      char* newString = new char[arrCapacity];
      for (size_t i = 0; i < arrLength; ++i) {
         newString[i] = arr[i];
      }
      newString[arrLength] = '\0';
      delete[] data;
      data = newString;
   }
}