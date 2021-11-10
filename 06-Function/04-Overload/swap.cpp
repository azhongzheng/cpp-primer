#include <iostream>

void swap(int &a, int &b)
{
    auto temp = a;
    a = b;
    b = temp;
}
void swap(char &a, char &b)
{
    auto temp = a;
    a = b;
    b = temp;
}

void swap(double &a, double &b)
{
    auto temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    /* code */
    int a1 = 3, b1 = 5;
    char a2 = 'a', b2 = 'b';
    double a3 = 3.14159, b3 = 3.15;

    swap(a1, b1);
    std::cout << "a1:" << a1 << ", b1:" << b1 << std::endl;

    swap(a2, b2);
    std::cout << "a2:" << a2 << ", b2:" << b2 << std::endl;

    swap(a3, b3);
    std::cout << "a3:" << a3 << ", b3:" << b3 << std::endl;
    return 0;
}
