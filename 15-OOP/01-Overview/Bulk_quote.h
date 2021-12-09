#include "Quote.h"

class Bulk_quote : public Quote
{
private:
    /* data */
public:
    double net_price(size_t n) const override
    {
        return n * 2;
    }
};
