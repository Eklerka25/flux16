#include <iostream>
#include <map>
#include <vector>

#include <classes/cpu.hpp>
#include <classes/memory.hpp>

#include <typedefs.hpp>

Byte& Cpu::GetReg(Byte value) {
    switch (value) {
        case 0x0:
            return A;
        case 0x1:
            return B;
        case 0x2:
            return C;
    }
}

void Cpu::Init() {
    A = B = C = 0;
    adress = 0x0;
    std::cout << "[DEBUG] Hello, world!\n";
}

void Cpu::Execute(Memory& memref, Byte cycles, Word sp) {
    for (int x = 0; x < cycles; x++) {
        adress = sp + x;
        std::cout << static_cast<int>(memref.Fetch(adress)) << "\n";
    }
}

void Cpu::ExecuteInst(Byte inst[4]) {
    switch (inst[0]) {
        case 0x0:
            break;
        case 0x1:
            break;
        default:
            break;
    }
}
