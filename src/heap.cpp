#include "heap.h"
#include "exception.h"

namespace LegoVm {
    
        Heap::Heap(size_t size) :_heap(nullptr),_size(size) {
            _heap = new byte[size]; // Allocate the heap memory
            if (!_heap) {
                throw LegoVmException("create heap memory failed!"); // Throw an exception if memory allocation fails
            }

            _freeBlocks.push_back(Block(0, size));
        }
    
        Heap::~Heap() {
            delete[] _heap; // Free the heap memory
            _heap = nullptr; // Set the pointer to null to avoid dangling pointer
            _size = 0; // Reset the size to 0
            _freeBlocks.clear();
            _usedBlocks.clear();
        }
    
        offset_t Heap::allocate(size_t size) {
            // Placeholder for allocation logic
            // In a real implementation, this would manage free blocks and return a valid address
            return 0; // Return 0 for now
        }
    
        void Heap::free(offset_t address) {
            // Placeholder for free logic
            // In a real implementation, this would mark the block as free
        }
}   // namespace LegoVm