#include <iostream>
#include <functional>
#include <vector>

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

void test2()
{
    // std::string _1 = "s";
    std::vector<std::string> words = {"Alice", "Emma", "has", "long", "flowing", "red", "hair"};
    // int sz = 0;
    // auto wc = std::find_if(words.begin(), words.end(), [sz](const std::string a){});
    auto wc = std::find_if(words.begin(), words.end(), std::bind(check_size, std::placeholders::_1, 4));
    std::cout << *wc << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    return 0;
}
