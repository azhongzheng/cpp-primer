#include <iostream>
#include <cmath>

void test1()
{
    // bool值格式化输出
    std::cout << "default true: " << true << ", default false: " << false << std::endl;
    std::cout << "boolalpha true: " << std::boolalpha << true
              << ", boolalpha false: " << std::boolalpha << false << std::endl;
    std::cout << "noboolalpha true: " << std::noboolalpha << true
              << ", noboolalpha false: " << std::noboolalpha << false << std::endl;
}

void test2()
{
    // 进制格式化输出
    std::cout << "default: " << 20 << " " << 1024 << std::endl;
    std::cout << "octal: " << std::oct << 20 << " " << 1024 << std::endl;
    std::cout << "hex: " << std::hex << 20 << " " << 1024 << std::endl;
    std::cout << "decimal: " << std::dec << 20 << " " << 1024 << std::endl;

    std::cout << std::showbase; // 打印整型时显示进制
    std::cout << "octal: " << std::oct << 20 << " " << 1024 << std::endl;
    std::cout << "hex: " << std::hex << 20 << " " << 1024 << std::endl;
    std::cout << "decimal: " << std::dec << 20 << " " << 1024 << std::endl;
    std::cout << std::noshowbase;

    std::cout << std::uppercase << std::showbase << "hex: " << std::hex << 20 << " " << 1024
              << std::nouppercase << std::noshowbase << std::endl;
}

void test3()
{
    // 浮点数精度格式化输出
    // 默认长度6位
    std::cout << "Precision: " << std::cout.precision() << " Value: " << sqrt(2.0) << std::endl;

    std::cout.precision(12); // 指定精度长度
    std::cout << "Precision: " << std::cout.precision() << " Value: " << sqrt(2.0) << std::endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    test3();
    return 0;
}
