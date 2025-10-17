#pragma once

#include <cstdlib>


class DynamicArray {

   public:
      DynamicArray();
      int32_t getCapacity() const;
      int32_t getSize() const;


   private:
      int32_t capacity;
      int32_t size;
      // Pointer to data
   


};