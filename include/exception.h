#pragma once
#include <exception>

namespace LegoVm {

    class LegoVmException : public std::exception {
    public:
        explicit LegoVmException(const char* message) : _msg(message) {}
        virtual const char* what() const noexcept override {
            return _msg;
        }
    private:
        const char* _msg;
    };

}   // namespace LegoVm