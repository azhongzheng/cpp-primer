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
    auto f = []
    { return 42; };
    std::cout << f() << "\n";
}

void biggies(std::vector<std::string> &words, std::vector<std::string>::size_type sz)
{
    std::stable_sort(words.begin(), words.end(),
                     [](const std::string &a, const std::string &b)
                     {
                         return a.size() < b.size();
                     });
    print(words);

    auto wc = std::find_if(words.begin(), words.end(), [sz](const std::string &a)
                           { return a.size() >= sz; });
    std::cout << *wc << std::endl;
    std::for_each(wc, words.end(), [](std::string &s)
                  { std::cout << s << " "; });
    putchar('\n');
}

void test2()
{
    std::vector<std::string> words = {"Alice", "Emma", "has", "long", "flowing", "red", "hair"};
    biggies(words, 4);
}

void test3(int a)
{
    auto f = [a](int b)
    { return a + b; };
    std::cout << f(3) << std::endl;
}

int main(int argc, char const *argv[])
{
    test2();
    test3(4);
    return 0;
}
