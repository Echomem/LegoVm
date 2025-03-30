#pragma once

namespace LegoVm {

    class VM {
    public:
        VM();
        ~VM();

        // Load the program from a file
        // This function will be responsible for loading the program into memory
        void load(const char *programFile);

        // Load the program from a file and execute it
        // This function will be responsible for loading the program into memory
        void run();

        // Execute a single step of the program
        // This function will be responsible for executing one instruction at a time
        void step();
    }; 

}   // namespace LegoVm