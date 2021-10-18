#include <iostream>

void test1()
{
    size_t v1 = 42;
    auto f = [v1]
    { return v1; };
    std::cout << f() << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    int a[10];
    std::cout << a[12];
    return 0;
}
