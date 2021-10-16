#include <iostream>
#include <vector>
#include <numeric>
// #include <algorithm>

void test1()
{
    // accumulate算法：对数字进行相加
    std::vector<int> vec1 = {1, 2, 4, 8};
    int sum = std::accumulate(vec1.begin(), vec1.end(), 0);
    std::cout << sum << std::endl;
    // accumulate算法：对字符串进行相加
    std::vector<std::string> vec2 = {"nice", "to", "meet", "you"};
    std::string join = "-";
    std::string sum_str = std::accumulate(vec2.begin(), vec2.end(), join);
    std::cout << sum_str << std::endl;
}

void test2(){
    // equal算法： 比较两个容器对应位置的值是否相等
    std::vector<int> vec1 = {1, 2, 4, 8};
    std::vector<int> vec2 = {1, 2, 4, 8, 0};
    // bool isqual = std::equal(vec1.begin(), vec1.end(), vec2.begin());
    if(std::equal(vec1.begin(), vec1.end(), vec2.begin()) && vec1.size()== vec2.size())
        std::cout << "vec1 == vec2" << std::endl;
    else
        std::cout << "vec1 <> vec2" << std::endl;
}


int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    test2();
    return 0;
}
