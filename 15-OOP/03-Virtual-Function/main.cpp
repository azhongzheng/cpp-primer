#include "Bulk_quote.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    Quote base("0-201-82470-1", 50);
    print_total(std::cout, base, 10);

    Bulk_quote derived("0-201-82470-1", 50, 5, 0.19);
    print_total(std::cout, derived, 10);
    return 0;
}
