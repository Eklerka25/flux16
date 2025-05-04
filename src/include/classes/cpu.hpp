#pragma once

#include <iostream>
#include <map>
#include <vector>

#include <classes/cpu.hpp>
#include <classes/memory.hpp>

#include <typedefs.hpp>

class Cpu {
    public:
        Byte A, B, C;
        Word adress;

        void Init();
        void Execute(Memory& memref, Byte cycles, Word sp);
        void ExecuteInst(Byte inst[4]);
        Byte& GetReg(Byte value);
};
