#pragma once
#include <vector>
#include "types.h"

namespace LegoVm {

    class Heap {
    public:
        Heap(size_t size = 1024 * 1024); // Default size is 1MB
        ~Heap();

        // Allocate a block of memory of the given size and return its address
        offset_t allocate(size_t size);

        // Free a block of memory at the given address
        // The address must be a valid address returned by allocate
        void free(offset_t address);
    private:
        struct Block {
            offset_t address;
            size_t size;
            Block(offset_t addr, size_t len): address(addr), size(len) {}
        };
        
        byte* _heap; // Pointer to the heap memory
        size_t _size; // Size of the heap    

        std::vector<Block> _freeBlocks; // Heap free blocks list.
        std::vector<Block> _usedBlocks; // Heap used blocks list.
    };

}   // namespace LegoVm