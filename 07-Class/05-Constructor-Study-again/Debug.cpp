#include <iostream>

class Debug
{
public:
    constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
    constexpr bool any() { return hw || io || other; }
    void set_it(bool b) { io = b; }
    void set_hw(bool b) { hw = b; }
    void set_other(bool b) { other = b; }

private:
    bool hw;
    bool io;
    bool other;
};
int main(int argc, char const *argv[])
{
    /* code */
    Debug io_sub(false, true, true);
    if(io_sub.any())
        std::cerr << "print appropriate error meassages\n";
    Debug prod(false);
    if(prod.any())
        std::cerr << "print an error message\n";
    return 0;
}
