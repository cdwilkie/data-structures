#include "../include/dynamic_array.h"

// Default Constructor
DynamicArray::DynamicArray()
   : capacity(0), size(0), data(nullptr) {
}//end DynamicArray()

// Destructor
DynamicArray::~DynamicArray() {
   delete[] data;
   data = nullptr;
}//end ~DynamicArray()



//---------------------
// Utility
void DynamicArray::pushBack(int32_t newValue) {
   if (size == capacity) {
      size_t newCapacity = (capacity == 0) ? 1 : 2 * capacity;
      resizeArray(newCapacity);
   }
   data[size] = newValue;
   ++size;
}//end pushBack()

void DynamicArray::popBack() {
   if (size > 0) {
      --size;
   }
   size_t threshold = 0.25 * capacity;
   if (threshold > size) {
      resizeArray(threshold);
   }

}//end popBack()

void DynamicArray::resizeArray(size_t newCapacity) {
   int32_t* newArray = new int[newCapacity];
   // For all/any data; copy
   for (size_t i = 0; i < size; ++i) {
      newArray[i] = data[i];
   }
   delete[] data;
   data = newArray;
   capacity = newCapacity;
}//end resizeArray()



//----------------------
// Accessors
size_t DynamicArray::getCapacity() const {
   return capacity;
}//end getCapacity()

size_t DynamicArray::getSize() const {
   return size;
}//end getSize()

int32_t& DynamicArray::operator[](size_t index) {
   return data[index];
}//end []

