#include <iostream>
#include <map>
#include <vector>

#include <classes/cpu.hpp>
#include <classes/memory.hpp>

#include <typedefs.hpp>

void Cpu::Init() {
    A = B = C = 0;
    Adress = 0x0;
    std::cout << "[DEBUG] Hello, world!\n";
}

void Cpu::Execute(Memory& memref, Byte cycles, Word sp) {
    
}
