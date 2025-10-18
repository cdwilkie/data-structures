#pragma once

#include <cstdlib>


class DynamicArray {

   public:
      DynamicArray();
      ~DynamicArray();
      size_t getCapacity() const;
      size_t getSize() const;
      int32_t& operator[](size_t index);


   private:
      size_t capacity;
      size_t size;
      int32_t* data;
   


};