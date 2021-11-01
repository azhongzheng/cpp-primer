#include <string>

void test1()
{
    std::string dots(10, '.');                //直接初始化
    std::string s(dots);                      //直接初始化
    std::string s2 = dots;                    //拷贝初始化
    std::string null_book = "9-999-9999";     //拷贝初始化
    std::string nines = std::string(10, '9'); //拷贝初始化
}

int main(int argc, char const *argv[])
{
    return 0;
}
