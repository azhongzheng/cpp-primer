#include <memory>
#include <iostream>

void test1()
{
    std::unique_ptr<double> p1;
    std::unique_ptr<int> p2(new int(42));
    std::unique_ptr<std::string> p3(new std::string("hello world"));
    // std::unique_ptr<std::string> p4(p3); 不支持拷贝
    std::unique_ptr<std::string> p5;
    // p5 = p3; 不支持赋值
}
void test2()
{
    std::unique_ptr<std::string> p1(new std::string("hello world"));
    //p1的所有权转移给p2
    std::unique_ptr<std::string> p2(p1.release());
    std::cout << *p2 << std::endl;
    std::unique_ptr<std::string> p3(new std::string("Trex"));
    p2.reset(p3.release());
    std::cout << *p2 << std::endl;

    std::string *p = p2.release(); //返回一个指针
    std::cout << *p << std::endl;
    delete p;
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    return 0;
}
