#include <iostream>

double askForNum (){
    std::cout << "Enter some number: ";

    int x;
    std::cin >> x;

    return x;
}

char askForMathOperator (){
    std::cout << "Enter one of these math operators (+, -, *, or /: ";

    char a;
    std::cin >> a;

    return a;

}

void calculation (double a, char x, double b) {


    if (x == '+'){

        std::cout << a << " + " << b << " = " << a + b << std::endl;
    }
    else if (x == '-'){

        std::cout << a << " - " << b << " = " << a - b << std::endl;

    }
    else if (x == '*'){

        std::cout << a << " * " << b << " = " << a * b << std::endl;

    }

    else if (x == '/'){

        std::cout << a << " / " << b << " = " << a / b << std::endl;
    }
    else {
        std::cout << "Oops ;( " << std::endl;
    }

}
int main()
{
    double a = askForNum();

    char x = askForMathOperator();

    double b = askForNum();

    calculation(a, x, b);

    return 0;
}
