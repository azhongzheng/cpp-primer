#include <sstream>
#include <string>
#include <iostream>
#include <assert.h>

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

void test2()
{
    std::string::size_type a;
    auto len = std::string("10").size();
}

void test3()
{
    std::string str = "Hello";
    std::string phrase = "Hello world";
    std::string slang = "Hiya";
    assert(str < phrase);
}
void test4()
{
    std::string st1(10, 'c'), st2;
    st1 = st2;
    std::string s1 = "hello", s2 = "world";
    std::string s3 = s1 + "," + s2 + '\n';
    std::cout << s3;
    std::string s4 = s1 + ",";
    // std::string s5 = "hello" + ", "; // 不能把字面值直接相加
    std::string s6 = s1 + ", " + "world" + "hello";
    // std::string s7 = "hello" + ", " + s2;
    
}

int main(int argc, char const *argv[])
{

    test4();
    return 0;
}
