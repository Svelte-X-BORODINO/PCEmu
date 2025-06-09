#include "register.hpp"
#include <iostream>

Register::processCommand(Reg* reg) {
    if (!reg) return 228; 

    switch (reg->command) {
        case 0x01: 
            init_reg(Reg* reg);
            break;
        case 0xFF:
            deinit_reg(Reg* reg);
            break;
            
    }
}

Register::init_reg(Reg* reg) {
    
}
Register::init_reg(Reg* reg) {
    
}