#include <iostream>

void test1()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << s1 << " " << s2 << "\n";
}

void test2()
{
    std::string word;
    while (std::cin >> word)
    {
        std::cout << word << "\n";
    }
}

void test3()
{
    std::string line;
    while (getline(std::cin, line))
        std::cout << line << "\n";
}
void test4()
{
    std::string line;
    while (getline(std::cin, line))
        if(!line.empty())
            std::cout << line << "\n";
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    // test3();
    test4();
    return 0;
}