#pragma once

#include <iostream>
#include <map>
#include <vector>

#include <typedefs.hpp>

class Memory {
    private:
        static constexpr Dword memsize = 64 * 1024;
        Byte memory[memsize];
    public:
        void Init();
        void Store(Word adress, Byte value);
        Byte Fetch(Word adress);
};
