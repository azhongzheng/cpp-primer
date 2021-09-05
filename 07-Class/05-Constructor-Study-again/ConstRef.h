class ConstRef
{
private:
    /* data */
    int i;
    const int ci;
    int &ri;

public:
    ConstRef(int ii);
};

ConstRef::ConstRef(int ii) : i(ii), ci(i), ri(i) {}