#include <iostream>
#include <memory>

void test1()
{
    std::shared_ptr<int> p1(new int(1024));
    std::cout << *p1 << std::endl;

    int *rp = new int(100);
    std::shared_ptr<int> p2(rp);
}

std::shared_ptr<int> clone(int p)
{
    // return new int(p); 两者无法隐式转换
    return std::shared_ptr<int>(new int(p));
    // return std::make_shared<int>(p);
}

void test2()
{
    auto p1 = clone(4);
    std::cout << p1.use_count() << std::endl;
    auto p2 = p1;
    std::cout << p1.use_count() << std::endl;
    int a = *p1;
    std::cout << p1.use_count() << std::endl;
}

void test3()
{
    std::shared_ptr<int> p(new int(42));
    int *q = p.get();
    // std::cout << p.use_count();
    // {
    //     std::shared_ptr<int>(q);
    // }
    int foo = *p;
    std::cout << "*p: " << *p << std::endl;
    p.reset(new int(1024));
    std::cout << "*p: " << *p << std::endl;
    std::cout << "p.unique: " << p.unique() << std::endl;
    p.reset();
    std::cout << "p.use_count: " << p.use_count() << std::endl;
    std::cout << "p.unique: " << p.unique() << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test3();

    return 0;
}
