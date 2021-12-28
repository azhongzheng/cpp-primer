#include "Bulk_quote.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    Bulk_quote bq;
    std::cout << bq.net_price(5);

    Quote item;
    Bulk_quote bulk;
    Quote *p = &item;
    std::cout << p->net_price(2);
    return 0;
}
