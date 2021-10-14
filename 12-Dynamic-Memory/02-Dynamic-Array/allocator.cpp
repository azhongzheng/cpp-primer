#include <iostream>

void test1()
{
    std::allocator<std::string> alloc; // 可以分配string的对象
    auto const p = alloc.allocate(10); //分配10个为初始化的string
    auto q = p;                        // q指向元素构造的最后位置
    std::cout << q << std::endl;
    // alloc.construct(q++);
    // std::cout << "q:" << *q++ << std::endl;

    alloc.construct(q++, 10, 'c');
    std::cout << "q:" << *q << std::endl;

    alloc.construct(q++, "hi");
    std::cout << "q:" << *q << std::endl;
    std::cout << "p:" << *p << std::endl;
    while (q != p)
        alloc.destroy(--q);
    alloc.deallocate(p, 10);
    std::cout << "q:" << *q << std::endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
