#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

template <typename T>
void print_map(T &t)
{
    for (auto i : t)
        std::cout << i.first << ": " << i.second << "\n";
    putchar('\n');
}

void test1()
{
    std::unordered_map<std::string, int> u_word_count;
    std::map<std::string, int> word_count;
    for (int i = 1; i < 10; i++)
    {
        word_count.insert({std::string("key") + std::to_string(i), i});
        u_word_count.insert({std::string("key") + std::to_string(i), i});
    }
    std::cout << "顺序map: \n";
    print_map(word_count);
    std::cout << "无序map: \n";
    print_map(u_word_count);
    std::cout << u_word_count.bucket_count() << std::endl;
    std::cout << u_word_count.max_bucket_count() << std::endl;
    std::cout << u_word_count.bucket_size(3) << std::endl;
    std::cout << u_word_count.bucket("key8") << std::endl;
    
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
