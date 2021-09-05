#include <string>
#include "ConstRef.h"
#include "Sales_data.h"
// #include <iostream>

// class X{
//     int i;
//     int j;
// public:
//     X(int val): j(val), i(j){}
//     // warning: field 'j' is uninitialized when used here
// };

int main(int argc, char const *argv[])
{
    /* code */
    // Sales_data sales_data("hello");
    // Sales_data obj;

    Sales_data item;
    std::string null_book = "9-999-99999-9";

    item.combine(Sales_data("9-999-99999-9"));
    // null_book 传入时发生了隐式转换
    // item.combine(null_book);
    // explicit 指明了传参只能显式传参
    //explicit 构造函数不能用于拷贝初始化的过程
    // Sales_data item2 = item;

    item.combine(Sales_data(null_book));
    item.combine(static_cast<Sales_data>(std::cin));
    return 0;
}
