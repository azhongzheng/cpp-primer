#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

class Sales_data
{
    //外部函数想要访问类中的私有变量和函数需要增加friend关键字
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend std::ostream &print(std::ostream &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);

public:
    // add constructor
    // Sales_data() = default;
    // Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(price * cnt)
    {
        std::cout << "constructor: Sales_data(const std::string &s, unsigned cnt, double price)\n";
    }

    // 委托构造函数
    Sales_data() : Sales_data("", 0, 0) { std::cout << "Sales_data()\n"; }

    // explicit 只能用于构造函数，指明了传参只能显式传参, 只对一个参数的构造函数有效
    explicit Sales_data(std::string s) : Sales_data(s, 0, 0) { std::cout << "Sales_data(std::string s)\n"; }
    explicit Sales_data(std::istream &is) : Sales_data() { read(is, *this); }

    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);

private:
    double avg_price() const { return units_sold ? revenue / units_sold : 0; };
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//Sales_data 非成员接口函数

#endif