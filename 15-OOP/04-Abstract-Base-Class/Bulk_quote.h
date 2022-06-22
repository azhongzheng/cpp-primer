#include "Disc_quote.h"
#include <iostream>

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double p, size_t qty, double disc)
        : Disc_quote(book, price, qty, disc) {}
    double net_price(size_t n) const override;


};

double Bulk_quote::net_price(size_t cnt) const
{
    if (cnt > min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}

