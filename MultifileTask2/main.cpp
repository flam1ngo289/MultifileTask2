#include <iostream>
#include <string>
#include "counter.hpp"


int main(int argc, const char * argv[]) {
    std::string choice;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> choice;
    
    Counter counter;
    if (choice == "да"){
        int startValue;
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> startValue;
        counter = Counter(startValue);
    }
    
    char com;
    
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> com;
        
        if (com == '+'){
            counter.increase();
        } else if (com == '-') {
            counter.decrease();
        } else if (com == '=') {
            std::cout << counter.get_value() << std::endl;
        } else if (com == 'x') {
            std::cout << "До свидания!" << std::endl;
            break;
        } else {
            std::cout << "Неверная команда, попробуйте снова." << std::endl;
        }
    }
    return 0;
}
