#include "../include/dynamic_array.h"

// Default Constructor
DynamicArray::DynamicArray()
   : capacity(0), size(0), data(nullptr) {
}//end DynamicArray()

// Destructor
DynamicArray::~DynamicArray() {
   delete[] data;
}//end ~DynamicArray()

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