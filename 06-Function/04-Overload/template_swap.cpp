#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    int a = 1, b = 2;
    swap<int>(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}
