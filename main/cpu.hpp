#ifndef CPU_HPP
#define CPU_HPP
#include "register.hpp"
#include "l_cache/cache.hpp"
class CPU {
    public:
        struct {
            Reg* reg_a;
            Reg* reg_b;
            Reg* reg_c;
            Reg* reg_d;
            unsigned char command;
        } CPU;
        void init_cpu(CPU cpu);
        void deinit_cpu(CPU cpu);

        
}

#endif /* CPU_HPP */
