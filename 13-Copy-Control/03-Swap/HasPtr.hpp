#include <string>
class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new size_t(i)){};
    HasPtr(const HasPtr &p) : ps(new std::string(*p.ps)), i(p.i) { ++*use; };

    HasPtr &operator=(const HasPtr &);
    ~HasPtr();

private:
    std::string *ps;
    int i;
    size_t *use;
};

HasPtr &HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use;
    if (--*use == 0)
    {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
    
}
HasPtr::~HasPtr()
{
    if (--*use == 0)
    {
        delete ps;
        delete use;
    }
}
