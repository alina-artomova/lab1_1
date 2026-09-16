#include <iostream>

int main()
{
    //39
    std::cout << "Задача 39" << "\n";
    
    double V_kmh, V_ms;
    
    std::cout << "Введіть швидкість у км/год: ";
    std::cin >> V_kmh;
    
    V_ms = V_kmh * 1000 / 3600;
    
    std::cout << "Швидкість у м/с: " << V_ms << "\n";
    
    //18
    std::cout << "\n";
    std::cout << "Задача 18" << "\n";

    double A, A2, A4, A8;

    std::cout << "Введіть число A: ";
    std::cin >> A;
    
    A2 = A * A;
    A4 = A2 * A2;
    A8 = A4 * A4;
    
    std::cout << "A^2 = " << A2 << "\n";
    std::cout << "A^4 = " << A4 << "\n";
    std::cout << "A^8 = " << A8 << "\n";
    
    //23
    std::cout << "\n";
    std::cout << "Задача 23" << "\n";

    double TC, TF;

    std::cout << "Введіть температуру у градусах Цельсія: ";
    std::cin >> TC;

    TF = TC * 9 / 5 + 32;

    std::cout << "Температура у градусах Фаренгейта: " << TF << "\n";
    
    return 0;
}
