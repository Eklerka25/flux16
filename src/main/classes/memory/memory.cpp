#include <iostream>
#include <map>
#include <vector>

#include <classes/cpu.hpp>
#include <classes/memory.hpp>

#include <typedefs.hpp>

void Memory::Init() {
    for (int x = 0; x < memsize; x++) {
        memory[x] = 0x0;
    }
}

void Memory::Store(Word adress, Byte value) {
    memory[adress] = value;
}

Byte Memory::Fetch(Word adress) {
    return memory[adress];
}
