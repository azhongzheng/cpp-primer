#include <string>
class NoDefault
{
public:
    NoDefault() = default;
    NoDefault(const std::string &);
};

struct A{
    NoDefault my_mem;
    A() {};
};

struct B{
    B() = default;
    NoDefault b_member;
};

class C{

};

int main(int argc, char const *argv[])
{
    A a;
    C c;
    return 0;
}

