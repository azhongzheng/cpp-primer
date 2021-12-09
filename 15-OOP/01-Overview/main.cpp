#include "Bulk_quote.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    Bulk_quote bq;
    std::cout << bq.net_price(5);
    return 0;
}
