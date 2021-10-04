#include <iostream>

class Base
{
public:
    virtual void func() { std::cout << "base class\n"; }
};

class Derive : public Base
{
public:
    void func() override { std::cout << "derive class\n"; }
};

void test1()
{
    float f = 1.123;
    double d = 3.1415926535;
    int f1 = static_cast<int>(f);
    int d1 = static_cast<int>(d);
    double f2 = static_cast<double>(f);
    float d2 = static_cast<float>(d);
    // int *pi = static_cast<int *>(&f); //类型转化无效
    void *pi = static_cast<void *>(&f);
    std::cout << "f1:" << f1 << std::endl;
    std::cout << "d1:" << d1 << std::endl;
    std::cout << "f2:" << f2 << std::endl;
    std::cout << "d2:" << d2 << std::endl;
}

void test2()
{
    Derive d;
    d.func();
    // 子类转父类
    Base *base = static_cast<Base *>(&d);
    base->func();
}

void test3()
{
    Derive d;
    d.func();
    // 子类转父类
    Base *base = dynamic_cast<Base *>(&d);
    base->func();
    // 父类转子类
    Derive *dd = dynamic_cast<Derive *>(base);
    dd->func();
}

void test4()
{
    int data = 10;
    int test = 20;
    const int *cpi = &data;
    // *cpi = 30;
    //一般用来去除常量属性
    int *pi = const_cast<int *>(cpi);
    *pi = test;
    std::cout << data << std::endl;
}

void test5()
{
    int data = 10;
    int *pi = &data;
    *pi = 30;
    // 强制类型转换，慎用
    float *fpi = reinterpret_cast<float *>(pi);
    *fpi = 3.14159;
    std::cout << data << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test4();
    test5();
    return 0;
}
