#include <iostream>

void swap_by_value(int a, int b)
{
    auto temp = a;
    a = b;
    b = temp;
}
void swap_by_reference(int &a, int &b)
{
    auto temp = a;
    a = b;
    b = temp;
}

void swap_by_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // std::cout << "swap_by_pointer: a:" << *a << ", b:" << *b << std::endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    int a = 1, b = 2;
    swap_by_value(a, b);
    std::cout << "swap_by_value: a:" << a << ", b:" << b << std::endl;
    
    swap_by_reference(a, b);
    std::cout << "swap_by_reference: a:" << a << ", b:" << b << std::endl;

    swap_by_pointer(&a, &b);
    std::cout << "swap_by_pointer: a:" << a << ", b:" << b << std::endl;
    return 0;
}
