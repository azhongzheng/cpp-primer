#include <iostream>
#include <utility>
#include <vector>

void test1()
{
    std::pair<std::string, std::string> anon;
    std::pair<std::string, size_t> word_count;
    std::pair<std::string, std::vector<std::string>> line;
    std::pair<std::string, std::string> author("James", "Joyce");
    std::cout << author.first << " " << author.second << std::endl;
}

std::pair<std::string, int> process(std::vector<std::string> &v)
{
    if (!v.empty())
        return {v.back(), v.size()};
    else if (v.size() == 10)
        return std::make_pair(v.back(), v.size());
    else
        return std::pair<std::string, int>();
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
