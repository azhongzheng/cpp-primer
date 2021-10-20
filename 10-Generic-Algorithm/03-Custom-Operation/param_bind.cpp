#include <iostream>
#include <functional>

bool check_size(const std::string &s, std::string::size_type sz)
{
    return s.size() >= sz;
}

void test1()
{
    // std::string _1 = "s";
    auto check6 = std::bind(check_size, std::placeholders::_1, 3);
    std::string str = "hellohello";
    bool b1 = check6(str);
    std::cout << b1 << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
