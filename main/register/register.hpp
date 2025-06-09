#ifndef REGISTER_HPP
#define REGISTER_HPP

class Register {
public:
    // Объявляем структуру внутри класса
    struct {
        int integer;
        unsigned char command;
    } Reg;

    // Метод для обработки команд
    void processCommand(Reg* reg);

    void init_reg(Reg* reg);
    void deinit_reg(Reg* reg);
};

#endif // REGISTER_HPP

