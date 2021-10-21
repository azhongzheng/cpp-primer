#include <iostream>
#include <list>
#include <iterator>
#include <fstream>
#include <vector>
#include <numeric>
#include "Sales_data.h"

template <typename T>
void print(T &t)
{
    for (auto i : t)
        std::cout << i << " ";
    putchar('\n');
}

void test1()
{
    std::list<int> lst = {1, 2, 3, 4};
    std::list<int> lst2, lst3;
    std::copy(lst.begin(), lst.end(), std::front_inserter(lst2));
    std::copy(lst.begin(), lst.end(), std::inserter(lst3, lst3.begin()));
    print(lst2);
    print(lst3);
}

void test2()
{
    std::istream_iterator<int> in_iter(std::cin); //从cin读取int
    std::istream_iterator<int> eof;               //尾后迭代器
    std::vector<int> vec;
    while (in_iter != eof)
    {
        vec.push_back(*in_iter++);
    }
    print(vec);
}

void test3()
{
    std::istream_iterator<int> in(std::cin), eof;
    std::cout << std::accumulate(in, eof, 0) << std::endl;
}

void test4()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 8, 9};
    std::ostream_iterator<int> out_iter(std::cout, " ");
    for (auto e : vec)
        *out_iter++ = e;
    putchar('\n');

    std::copy(vec.begin(), vec.end(), out_iter);
    putchar('\n');
}

// void test5()
// {
//     std::istream_iterator<Sales_data> item_iter(std::cin), eof;
//     std::ostream_iterator<Sales_data> out_iter(std::cout, "\n");
//     Sales_data sum = *item_iter++;
//     while (item_iter != eof)
//     {
//         if (item_iter->isbn() == sum.isbn())
//         {
//             sum = *item_iter++;
//         }
//         else{
//             out_iter = sum;
//             sum = *item_iter++;
//         }
//     }
//     out_iter = sum;
// }

void test5()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); r_iter++)
    {
        std::cout << *r_iter << "\n";
    }

    std::sort(vec.rbegin(), vec.rend());
    print(vec);
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    test5();
    return 0;
}
