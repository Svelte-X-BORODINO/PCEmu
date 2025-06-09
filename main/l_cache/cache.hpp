#ifndef CACHE_HPP
#define CACHE_HPP
class CACHE {    
    class L1_Cache {
        public:
            struct {
                char memory[4];
                unsigned char command;
            } L1_C;
    }
    init_cache_L1(L1_C cache);

    deinit_cache_L1(L1_C cache);

}

#endif /* CACHE_HPP */