#include <string>
#include <iostream>
using std::string;

int main(int argc, char const *argv[])
{
    string s1;
    string s2 = s1; //s2 is s1 copy

    string s3 = "hiya";          // 拷贝初始化
    string s4(10, 'c');          // 直接初始化
    string s5("hiya");           // 直接初始化
    string s6 = string(10, 'c'); //拷贝初始化
    std::cout << s4;

    return 0;
}
