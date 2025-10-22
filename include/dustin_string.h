// Headers
#include <cstdlib>

/* Custom char array class that will model a the behavior of string.
*/
class DustinString {
   public:
      DustinString();
      ~DustinString();
      size_t getSize() const;
      size_t getCapacity() const;
      char& operator[](size_t index);

   private:
      size_t size;
      size_t capacity;
      char* data;
      void resizeArray(size_t newCapacity);
};