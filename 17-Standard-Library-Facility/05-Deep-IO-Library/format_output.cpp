#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>

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
    // 浮点数格式化输出
    // 默认长度6位
    std::cout << 2.01 << std::endl;
    std::cout << "showpoint: " << std::showpoint << 2.01 << std::noshowpoint
              << ", noshowpoint value: " << 2.01 << std::endl;

    std::cout << "Value: " << sqrt(2.0) << std::endl;
    std::cout << "Precision: " << std::cout.precision() << ", Value: " << sqrt(2.0) << std::endl;
    std::cout.precision(12); // 指定精度长度
    std::cout << "Precision: " << std::cout.precision() << ", Value: " << sqrt(2.0) << std::endl;
}



void test4()
{
    // 输出补白
    int i = -16;
    double d = 3.14159;
    std::cout << "i: " << std::setw(12) << i << "next cool\n"
              << "d: " << std::setw(12) << d << "next cool\n";
    std::cout << std::left << "i: " << std::setw(12) << i << "next cool\n"
              << "d: " << std::setw(12) << d << "next cool\n"
              << std::right; //正常对齐
    std::cout << std::right << "i: " << std::setw(12) << i << "next cool\n"
              << "d: " << std::setw(12) << d << "next cool\n";
    std::cout << std::internal << "i: " << std::setw(12) << i << "next cool\n"
              << "d: " << std::setw(12) << d << "next cool\n"
              << std::setfill(' ');
    std::cout << std::setfill('#') << "i: " << std::setw(12) << i << "next cool\n"
              << "d: " << std::setw(12) << d << "next cool\n"
              << std::setfill(' ');

    std::cout << std::right << "i: " << std::setw(12) << i << "next cool\n"
              << "d: " << std::setw(12) << d << "next cool\n";
    std::cout << std::setfill('#') << "i: " << std::setw(12) << i << "next cool\n"
              << "d: " << std::setw(12) << d << "next cool\n";
    std::cout << std::left << std::setfill('#') << "i: " << std::setw(12) << i << "next cool\n"
              << "d: " << std::setw(12) << d << "next cool\n";
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    // test4();
    return 0;
}
