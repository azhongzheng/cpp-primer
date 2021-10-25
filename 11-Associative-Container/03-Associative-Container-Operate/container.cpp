#include <map>
#include <set>
#include <iostream>
#include <vector>

void test1()
{
    std::set<std::string>::key_type v1;         //string
    std::set<std::string>::value_type v2;       //string
    std::map<std::string, int>::value_type v3;  //pair<string, int>
    std::map<std::string, int>::key_type v4;    //string
    std::map<std::string, int>::mapped_type v5; //int
}

void test2()
{
    // std::vector<std::pair<const std::string, size_t>> word_count;
    std::map<std::string, int> word_count;
    word_count.insert({"key", 4});
    auto map_it = word_count.begin();
    std::cout << map_it->first << " " << map_it->second << "\n";
    // map_it->first = "new_key"; //不可以改变？
    ++map_it->second;
    std::cout << map_it->first << " " << map_it->second << "\n";
}

void test3()
{
    std::set<int> iset = {0,3,1,0,8,3,6};
    auto set_it = iset.begin();
    // *set_it = 43;
    auto value = iset.find(3);
    std::cout << *set_it << "\n";
    std::cout << *value << "\n";
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    return 0;
}
