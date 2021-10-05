#include <memory>
#include <list>
#include <iostream>

void test1()
{
    std::string greeting = "hello word";

    //C++11 shared_ptr 和 unique_ptr 都支持的操作
    std::shared_ptr<std::string> p1;
    std::shared_ptr<std::list<int>> p2;
    std::shared_ptr<std::string> p3(new std::string("hello world"));
    if (p3)
        std::cout << "point an object\n";
    else
        std::cout << "does't point an object\n";

    std::cout << "p3 address: " << p3.get() << std::endl;
    p3.swap(p1);
    std::cout << "p1 value: " << *p1 << std::endl;
    std::swap(p1, p3);
    std::cout << "p3 value: " << *p3 << std::endl;
}

void test2()
{
    std::shared_ptr<int> p1 = std::make_shared<int>(42);
    std::shared_ptr<std::string> p2 = std::make_shared<std::string>(10, '9');
    std::shared_ptr<int> p3 = std::make_shared<int>(); //默认值0
    std::cout << "p1, p2, p3 value::" << *p1 << ", " << *p2 << ", " << *p3 << std::endl;

    auto p4 = p1;
    auto p5 = p1;
    auto p6 = p5;
    std::cout << "p1 use count:" << p1.use_count() << ", p1 unique:" << p1.unique() << std::endl;
}

void test3()
{
    auto p = std::make_shared<int>(42);
    auto q(p); //对象引用计数+2
    std::cout << "q value:" << *q << std::endl;

    auto r = std::make_shared<int>(42);
    std::cout << "p use count:" << p.use_count() << std::endl;
    r = q; //std::make_shared<int>(42) 自动释放
    std::cout << "p use count:" << p.use_count() << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    test3();
    return 0;
}
