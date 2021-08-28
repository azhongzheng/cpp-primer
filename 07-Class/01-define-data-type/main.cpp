#include "Sales_data.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    Sales_data total;
    if (read(std::cin, total))
    {
        Sales_data trans;
        while (read(std::cin, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else{
                print(std::cout, total) <<std::endl;
            }
        }
        print(std::cout, total);
    }else{
        std::cerr << "No data ?!" << std::endl;
    }
    return 0;
}
