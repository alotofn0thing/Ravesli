#include <iostream>

int readNumber()
{
    int x;
    std::cin >> x;

    return x;
}

void writeAnswer(int x)
{
    std::cout << "Sum of two entered numbers is " << x << std::endl;
}
