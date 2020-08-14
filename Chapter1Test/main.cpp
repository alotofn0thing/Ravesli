#include <iostream>
#include "io.h"

int main()
{
    std::cout << "Enter your first integer: ";
    int a = readNumber();

    std::cout << "Enter your second integer: ";
    int b = readNumber();

    writeAnswer(a + b);

    return 0;
}
