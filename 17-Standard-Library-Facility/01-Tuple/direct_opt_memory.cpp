#include <iostream>
#include <new>

void test1()
{
    int *pi1 = new int;
    int *pi2 = new int(10);
    std::string *ps1 = new std::string;
    std::string *ps2 = new std::string();

    std::cout << "pi1:" << *pi1 << " pi2:" << *pi2 << std::endl;
    std::cout << "ps1:" << *ps1 << " ps2:" << *ps2 << std::endl;
}

void test2()
{
    //使用const 值必须初始化
    const int *pci = new const int(1024);
    const std::string *pcs = new const std::string;
}

void test3()
{
    int *pi = new int; //分配失败 new抛出std::bad_alloc
    int *p2 = new (std::nothrow) int;
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    return 0;
}
