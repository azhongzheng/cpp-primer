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
{ // fill算法：填充容器
    std::vector<int> vec1(10, 2);
    print(vec1);
    std::fill(vec1.begin(), vec1.end(), 1);
    print(vec1);
    std::fill(vec1.begin() + vec1.size() / 2, vec1.end(), 10);
    print(vec1);

    std::vector<std::string> vec2 = {"nice", "to", "meet", "you"};
    std::fill(vec2.begin(), vec2.end(), std::string("hello"));
    print(vec2);
}

void test2()
{
    // fill_n算法：填充指定数量元素
    std::vector<int> vec1(10, 2);
    std::fill_n(vec1.begin(), 3, 2);
    print(vec1);

    std::string str = "nice to meet you";
    std::fill_n(str.begin(), 3, 'x');
    std::cout << str << "\n";

    std::vector<std::string> vec2 = {"nice", "to", "meet", "you"};
    std::fill_n(vec2.begin(), 2, std::string("hello"));
    print(vec2);
}

void test3()
{
    std::vector<int> vec1(10, 2);
    auto it = std::back_inserter(vec1);
    *it = 42;
    print(vec1);
}

int main(int argc, char const *argv[])
{
    /* code */
    // test2();
    test3();
    return 0;
}
