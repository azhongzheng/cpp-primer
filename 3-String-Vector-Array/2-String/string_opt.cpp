#include <sstream>
#include <string>
#include <iostream>

void test1()
{
    std::stringstream os;

    std::string s = "hello world";
    std::string s1;
    os << s;

    os >> s1;

    std::cout << os.str() << "\n";
    std::cout << s1 << "\n";

    std::getline(os, s1);
    std::cout << s1 << "\n";
    std::cout << s.size() << "\n";

    std::wstring s2 = L"测试11";

    std::cout << s2.size() << "\n";
}


int main(int argc, char const *argv[])
{

    test1();
    return 0;
}
