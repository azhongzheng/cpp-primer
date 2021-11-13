#include "HasPtr.hpp"
#include <iostream>
#include <vector>

HasPtr f(HasPtr hp)
{
    HasPtr ret = hp;
    std::cout << "hp:" << &hp << "\n";
    std::cout << "ret:" << &ret << "\n";
    return ret;
}


int main(int argc, char const *argv[])
{
    /* code */
    HasPtr hasptr = HasPtr();
    auto f1 = f(hasptr);
    std::vector<int> v;
    return 0;
}
