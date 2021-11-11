#include <iostream>

int fact(int val)
{
    int ret = 1;
    while (val > 1)
    {
        ret *= val;
        val--;
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    std::cout << fact(4);
    return 0;
}
