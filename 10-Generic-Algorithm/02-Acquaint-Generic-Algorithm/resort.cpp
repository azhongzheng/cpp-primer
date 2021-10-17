#include <iostream>
#include <vector>
#include <set>

template <typename T>
void print(T &t)
{
    for (auto i : t)
        std::cout << i << " ";
    putchar('\n');
}

void test1()
{
    std::vector<int> vec = {1, 2, 6, 4, 3, 9, 8, 4, 5, 4};
    std::sort(vec.begin(), vec.end());
    print(vec);
    auto end_unique = std::unique(vec.begin(), vec.end());
    print(vec);
    // std::cout << *end_unique;
    vec.erase(end_unique, vec.end());
    print(vec);
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
