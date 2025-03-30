#include <iostream>
#include "vm.h"

int main() {
    LegoVm::VM vm;
    std::cout << "LegoVm test." << std::endl;
    vm.load("test.lego");
    vm.run();
    return 0;
}