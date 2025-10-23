#include "../include/dustin_string.h"

DustinString::DustinString()
   : length(0), capacity(0), data(nullptr) {

}

DustinString::DustinString(const char* arr) {
   if (arr) {
   length = findLength(arr);
   capacity = length + 1;
   data = new char[capacity];
   for (size_t i = 0; i < length; ++i) {
      data[i] = arr[i];
   }
   }
}

DustinString::~DustinString() {
   delete[] data;
}



size_t DustinString::getCapacity() const {
   return capacity;
}

char& DustinString::operator[](size_t index) {
   if (index < length && index >= 0) {
      return data[index];
   }
   else {
      throw "Index out of bounds";
   }
}

void DustinString::resizeArray(size_t newCapacity) {

}

size_t DustinString::findLength(const char* arr) {
   // Assume no string longer than 30 chars
   size_t length = 0;
   while (arr[length] != '\0') {
      ++length;
      if (length > 30) {
         length = -1;
         break;
      }
   }
   return length;
}
void DustinString::copyArray(const char* arr) {
   if (arr) {
      size_t arrLength = findLength(arr);
      size_t arrCapacity = arrLength +1;
      char* newString = new char[arrCapacity];
      for (size_t i = 0; i < arrLength; ++i) {
         newString[i] = arr[i];
      }
      delete[] data;
      data = newString;
   }
}