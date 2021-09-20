#include <vector>
#include <string>
#include <iostream>

using namespace std;
void test1()
{
    vector<int> ivec;
    vector<int> ivec2(ivec);
    vector<int> ivect3 = ivec;
    // vector<string> svec(ivec2);
}

void test2()
{
    vector<string> articles = {"a", "an", "the"}; //列表初始化

    //创建指定元素的数量
    vector<int> ivec(10, -1);
    vector<string> svec(10, "hi");

    vector<int> ivec1(10);    // 创建了10个0
    vector<string> svec1(10); //创建了10个"";

    vector<string> v1{10};
    vector<string> v2{10, "hi"};
    
    for (auto i : v1)
        cout << i << " ";
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    return 0;
}
