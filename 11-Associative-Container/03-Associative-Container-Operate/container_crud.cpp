#include <vector>
#include <set>
#include <map>
#include <iostream>

template <typename T>
void print(T &t)
{
    for (auto i : t)
        std::cout << i << " ";
    putchar('\n');
}
template <typename T>
void print_map(T &t)
{
    for (auto i : t)
    {
        std::cout << i.first << ": " << i.second << "\n";
    }
}

void add()
{
    // set add
    std::vector<int> ivec = {2, 4, 6, 8, 2, 4, 6, 8};
    std::set<int> set2;
    set2.insert(ivec.begin(), ivec.end());
    print(set2);
    set2.insert({1, 3, 5, 7, 1, 3, 5, 7});
    print(set2);
    // map add
    std::map<std::string, int> word_count;
    auto ret1 = word_count.insert({"key1", 1});

    word_count.insert(std::make_pair("key2", 2));
    std::cout << "ret " << ret1.first->first << ":" << (*ret1.first).second << "\n";
    word_count.insert(std::pair<std::string, int>("key3", 3));
    word_count.insert(std::map<std::string, int>::value_type("key4", 4));

    for (auto &pair : word_count)
        std::cout << pair.first << ": " << pair.second << "\n";

    std::multimap<std::string, std::string> authors;
    authors.insert({"bob", "book1"});
    auto ret2 = authors.insert({"bob", "book2"});
    std::cout << "ret2 " << ret2->first << ":" << ret2->second << "\n";
}

void remove()
{
    std::set<int> iset = {1, 2, 3, 4, 5, 6, 7, 8};
    iset.erase(4);
    print(iset);

    std::map<std::string, int> word_count = {{"key1", 1},
                                             {"key2", 2},
                                             {"key3", 3},
                                             {"key4", 4}};
    word_count.erase("key1");
    print_map(word_count);

    std::multimap<std::string, std::string> authors = {{"bob", "book1"},
                                                       {"bob", "book2"},
                                                       {"alice", "book1"}};
    authors.erase("bob");
    print_map(authors);
}

void modify(){
    std::map<std::string, int> word_count = {{"key1", 1},
                                             {"key2", 2},
                                             {"key3", 3},
                                             {"key4", 4}};
    word_count["Anna"] = 1;
    print_map(word_count);
    putchar('\n');
    word_count["key1"] = 11;
    print_map(word_count);

    std::set<int> iset = {1, 2, 3, 4, 5, 6, 7, 8};
   

 }

void query(){

}

int main(int argc, char const *argv[])
{
    /* code */
    modify();
    return 0;
}
