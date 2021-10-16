#include <iostream>
#include <vector>

template <typename T>
void print(T &t)
{
    for (auto i : t)
        std::cout << i << " ";
    putchar('\n');
}

void test1()
{   // fill算法：填充容器
    std::vector<int> vec1(10, 2);
    print(vec1);
    std::fill(vec1.begin(), vec1.end(), 1);
    print(vec1);
    std::fill(vec1.begin() + vec1.size() / 2, vec1.end(), 10);
    print(vec1);
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
