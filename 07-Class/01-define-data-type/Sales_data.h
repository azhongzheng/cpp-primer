#include <string>
// struct Sales_data
// {
//     /* data */
//     std::string isbn();
// };

struct Sales_data
{
    std::string isbn() const { return BookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

    std::string BookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//Sales_data 非成员接口函数
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);
