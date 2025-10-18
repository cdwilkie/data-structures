#include "../include/dynamic_array.h"

DynamicArray::DynamicArray()
   : capacity(0), size(0), data(nullptr) {
   
}

DynamicArray::~DynamicArray() {
   delete[] data;
}

size_t DynamicArray::getCapacity() const {
   return capacity;
}

size_t DynamicArray::getSize() const {
   return size;
}

int32_t& DynamicArray::operator[](size_t index) {
   return data[index];
}