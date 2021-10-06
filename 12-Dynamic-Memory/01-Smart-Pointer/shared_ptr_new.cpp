#include <iostream>
#include <memory>

void test1()
{
    std::shared_ptr<int> p1(new int(1024));
    std::cout << *p1 << std::endl;

    int* rp = new int(100);
    std::shared_ptr<int> p2(rp);
}

std::shared_ptr<int> clone(int p)
{
    // return new int(p); 两者无法隐式转换
    return std::shared_ptr<int>(new int(p));
    // return std::make_shared<int>(p);
}

void test2(){
    auto p1 = clone(4);
    std::cout << p1.use_count() << std::endl;
    auto p2 = p1;
    std::cout << p1.use_count() << std::endl;
    int a = *p1;
    std::cout << p1.use_count() << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    
    

    return 0;
}
