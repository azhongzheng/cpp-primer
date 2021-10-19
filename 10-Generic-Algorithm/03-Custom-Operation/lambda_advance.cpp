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
{
    //值捕获
    int v1 = 42;
    auto f = [v1]()
    {
        return v1;
    };
    v1 = 0;
    std::cout << f() << std::endl;
}

void test2()
{
    //值捕获
    size_t v1 = 42;
    auto f = [&v1]()
    { return v1; };
    // v1 = 0;
    v1 = 0;
    auto j = f();
    std::cout << j << std::endl;
}

void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz,
             std::ostream &os = std::cout,
             char c = ' ')
{
    std::stable_sort(words.begin(), words.end(),
                     [](const std::string &a, const std::string &b)
                     {
                         return a.size() < b.size();
                     });

    auto wc = std::find_if(words.begin(), words.end(), [sz](const std::string &a)
                           { return a.size() >= sz; });
    std::cout << *wc << std::endl;
    std::for_each(wc, words.end(), [&os, c](std::string &s)
                  { os << s << c; });
    putchar('\n');

    std::for_each(wc, words.end(), [=, &os](std::string &s)
                  { os << s << c; });
    putchar('\n');

    std::for_each(wc, words.end(), [&, c](std::string &s)
                  { os << s << c; });
    putchar('\n');
}

void test3()
{
    std::vector<std::string> words = {"Alice", "Emma", "has", "long", "flowing", "red", "hair"};
    biggies(words, 4);
}

void test4()
{
    int v1 = 42;
    auto f = [v1]() mutable
    {
        return ++v1;
    };
    v1 = 0;
    std::cout << f() << std::endl;
}

void test5()
{
    int v1 = 42;
    auto f = [&v1]() mutable
    {
        return ++v1;
    };
    v1 = 0;
    std::cout << f() << std::endl;
}

void test6()
{
    // 返回值类型
    std::vector<int> vi = {-1, 9, -3, 5, 9, -7, 2};
    // std::transform(vi.begin(), vi.end(), vi.begin(), [](int i)
    //                { return i < 0 ? -i : i; });
    std::transform(vi.begin(), vi.end(), vi.begin(), [](int i) -> int
                   {
                       if (i < 0)
                           return -i;
                       else
                           return i;
                   });
    print(vi);
}

int main(int argc, char const *argv[])
{
    /* code */
    test6();
    return 0;
}
