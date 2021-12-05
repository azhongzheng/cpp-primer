#include <string>
class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new size_t(i)){};
    HasPtr(const HasPtr &p) : ps(new std::string(*p.ps)), i(p.i) { ++*use; };

    HasPtr &operator=(HasPtr &);
    ~HasPtr();

private:
    friend void swap(HasPtr &lhs, HasPtr &rhs);
    std::string *ps;
    int i;
    size_t *use;
};

HasPtr::~HasPtr()
{
    if (--*use == 0)
    {
        delete ps;
        delete use;
    }
}

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    std::swap(lhs.ps, rhs.ps);
    std::swap(lhs.i, rhs.i);
}

HasPtr &HasPtr::operator=(HasPtr &rhs)
{
    swap(*this, rhs);


    return *this;
}