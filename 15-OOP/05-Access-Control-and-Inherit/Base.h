

class Base
{
public:
    void pub_mem();

protected:
    int prot_mem();

private:
    char priv_mem;
};

struct Pub_Derv : public Base
{
    int f() { return prot_mem(); }
    // char g() { return priv_mem; }
};

// struct Priv_Derv : private Base
// {
//     int f1() const { return prot_mem(); }
// };
