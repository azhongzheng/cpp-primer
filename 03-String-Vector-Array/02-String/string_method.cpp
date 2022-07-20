#include <iostream>

void test1()
{
    std::cout << std::string("hello").substr(2) << std::endl;
    std::cout << std::string("hello world").substr(1, 2) << std::endl;
    std::cout << std::string("hello world").find("wo") << std::endl;
    std::cout << std::boolalpha << std::string("hello world").find("y") << std::endl;
    std::cout << std::boolalpha << (std::string("hello world").find("x") == std::string::npos) << std::endl;
    std::cout << std::string("helloworld").find_first_of("al") << std::endl; // 找到其中一个即可
}

void test2()
{
    std::cout << std::string("hello").append("world", 3) << std::endl;                      // 到index 3截止不包含
    std::cout << std::string("hello").append(std::string("worldkangkang"), 3) << std::endl; // 从index第3开始
}
int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}
