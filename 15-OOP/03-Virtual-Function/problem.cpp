#include <iostream>

class Base
{
public:
    Base() = default;
    Base(std::string name) : basename(name) {}
    std::string name() { return basename; }
    virtual void print(std::ostream &os) { os << basename << "\n"; }

private:
    std::string basename;
};

class Derived : public Base
{
public:
    Derived(int i) : i(i) {}
    void print(std::iostream &os)
    {
        Base::print(os);
        os << " " << i << "\n";
    }

private:
    int i;
};

int main(int argc, char const *argv[])
{
    Base bobj("base");
    bobj.print(std::cout);
    Base *bp1 = &bobj;
    std::cout << bp1->name() << std::endl;
    return 0;
}
