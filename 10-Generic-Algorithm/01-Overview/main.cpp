#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

void test1()
{
    std::vector<int> vec = {1, 30, 42, 50};
    int val1 = 42;
    auto result1 = std::find(vec.begin(), vec.end(), val1);
    std::cout << *result1 << std::endl;

    std::list<std::string> lst = {"a value", "b value"};
    std::string val2 = "a value";
    auto result2 = std::find(lst.begin(), lst.end(), val2);
    std::cout << *result2 << std::endl;

    std::string lst3 = "a value";
    char ch = 'v';
    auto result3 = std::find(lst3.begin(), lst3.end(), ch);
    std::cout << *result3 << std::endl;
}

void test2()
{
    std::vector<int> vec = {1, 1, 1, 2, 2, 2, 2, 5, 5, 5, 5, 5};
    int cnt = std::count(vec.begin(), vec.end(), 2);
    std::cout << cnt << std::endl;

    std::string lst = "hello world";
    cnt = std::count(lst.begin(), lst.end(), 'x');
    std::cout << cnt << std::endl;
}

int main(int argc, char const *argv[])
{
    test1();
    // test2();
    return 0;
}
