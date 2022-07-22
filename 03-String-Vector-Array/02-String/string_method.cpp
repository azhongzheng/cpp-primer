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

    std::string s = "hello", t = "hello";
    s += std::string_view("world").substr(0, 3);
    t += std::string_view("world").substr(3);
    std::cout << s << std::endl;
    std::cout << t << std::endl;
}

void test3()
{
    std::string s = "hello world";
    std::cout << s.erase(3, 3) << std::endl;
    std::cout << s.erase(4) << std::endl;
    std::string s1 = "hello world";
    std::cout << s1.insert(5, "nice") << std::endl;
}

void test4(){
    std::string s="hello";
    std::string_view sv = s;
    s[0] = 'M';
    std::cout << s << std::endl;
    std::cout << sv << std::endl;
    s = "worldhello";
    std::cout << sv << std::endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    test4();
    return 0;
}
