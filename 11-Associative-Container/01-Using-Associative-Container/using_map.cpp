#include <map>
#include <set>
#include <iostream>

void test1()
{
    std::map<std::string, size_t> word_count;
    std::string word;
    while (std::cin >> word)
    {
        ++word_count[word];
    }
    for (const auto &w : word_count)
    {
        std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? "times" : "time") << std::endl;
    }
}

void test2()
{
    std::map<std::string, size_t> word_count;

    std::set<std::string> execlude = {"The", "But", "And", "Or", "An", "A"};
    // auto ret = execlude.find("And");
    std::string word;
    // std::cout << *ret << std::endl;
    while (std::cin >> word)
    {
        if (execlude.find(word) == execlude.end())
            ++word_count[word];
    }
    for (const auto &w : word_count)
    {
        std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? "times" : "time") << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    test2();
    return 0;
}
