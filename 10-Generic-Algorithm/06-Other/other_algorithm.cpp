#include <vector>
#include <numeric>
#include <iostream>

void test1()
{
    std::vector<int> v = {4, 3, 2, 1};
    std::vector<std::string> vs = {"h", "e", "l", "l", "o", "world"};

    std::cout << std::reduce(v.begin(), v.end()) << std::endl;
    std::cout << std::reduce(v.begin(), v.end(), 1, [](int x, int y)
                             { return x * y; })
              << std::endl;

    std::cout << std::reduce(vs.begin(), vs.end()) << std::endl; 
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
