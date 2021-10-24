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

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
