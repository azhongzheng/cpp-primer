#include "Bulk_quote.h"
#include <iostream>

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn()
       << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

class Animal
{
protected:
    std::string name;
    int age;

public:
    Animal() = default;
    Animal(std::string name) : name(name) {}
    virtual void run()
    {
        std::cout << name << " is run\n";
    }
};

class Person : public Animal
{
protected:
    std::string name;
    int age;

public:
    Person(std::string name) : name(name) {}
    virtual void run()
    
    {
        std::cout << name << " is run\n";
    }
};

void test_Animal(Animal& an)
{
    an.run();
}

void test()
{
    Animal an("animal");
    Person per("person");
    test_Animal(an);
    test_Animal(per);
}


int main(int argc, char const *argv[])
{
    Quote base("0-201-82470-1", 50);
    print_total(std::cout, base, 10);

    Bulk_quote derived("0-201-82470-1", 50, 5, 0.19);
    print_total(std::cout, derived, 10);
    test();
    return 0;
}
