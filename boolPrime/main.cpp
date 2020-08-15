#include <iostream>

bool isPrime(int x){
    if (x == 2){
        return true;
    }
    if (x == 3){
        return true;
    }
    if (x == 5){
        return true;
    }
    if (x == 7){
        return true;
    }
    return false;
}

int askForInteger() {
    std::cout << "Enter some integer that less than 10: ";
    int x;
    std::cin >> x;
    return x;
}

int main()
{
    int x = askForInteger();
    bool prime = isPrime(x);

    if (prime) {
        std::cout << "The number is prime!" << std::endl;
    }
    else {
        std::cout << "The number is not prime!" << std::endl;
    }
    return 0;
}
