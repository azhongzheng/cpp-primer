#include <iostream>
void test1()
{
    std::cout << std::stoi("42") << std::endl;
    std::cout << std::stoi("43 yuan") << std::endl;
    size_t pos;
    std::cout << std::stoi("43 yuan", &pos) << std::endl;
    std::cout << "43 yuan结束位置: " << pos << std::endl;
    std::cout << std::stoi("0ffff", nullptr, 16) << std::endl;
    std::cout << std::stoi("110", nullptr, 2) << std::endl;
}

int main(int argc, char const *argv[])
{
    test1();
    return 0;
}
