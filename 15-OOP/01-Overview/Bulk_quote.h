#include "Quote.h"

class Bulk_quote : public Quote
{
public:
    double net_price(size_t) const override;
};

