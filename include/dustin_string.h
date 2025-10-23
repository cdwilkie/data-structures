#pragma once
// Headers
#include <cstdlib>

/* Custom char array class that will model a the behavior of string.
*/
class DustinString {
   public:
      DustinString();
      DustinString(const char* arr);
      ~DustinString();
      size_t length;
      size_t getCapacity() const;
      char& operator[](size_t index);

   private:
      size_t capacity;
      char* data;

      void resizeArray(size_t newCapacity);
      void copyArray(const char* arr);
      size_t findLength(const char* arr);
};