#ifndef __QUOTE_H__
#define __QUOTE_H__

#include <string>

class Quote
{
public:
    std::string isbn() const;
    virtual double net_price(size_t n) const;
};

#endif