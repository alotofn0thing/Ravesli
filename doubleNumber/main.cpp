#include <iostream>

int doubleNumber(int a)
{
    return a * 2;
}

int main()
{
    std::cout << "Enter some integer: ";
    int x;
    std::cin >> x;

    std::cout << "Here's your double, don't mention it!" << std::endl;
    std::cout << doubleNumber(x) << std::endl;

    return 0;
}
