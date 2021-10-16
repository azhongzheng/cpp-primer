#include <iostream>
#include <vector>
#include <list>

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
}

int main(int argc, char const *argv[])
{
    test1();
    return 0;
}
