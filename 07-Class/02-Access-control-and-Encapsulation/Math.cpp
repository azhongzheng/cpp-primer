#include <iostream>
class Math
{
public:
    Math(int a, int b) : x(a), y(b) {}

    Math add()
    {
        std::cout << x + y << std::endl;
        return *this;
    }
    Math minus()
    {
        std::cout << x - y << std::endl;
        return *this;
    }

private:
    int x;
    int y;
};


int main(int argc, char const *argv[])
{
    /* code */
    Math math = Math(10, 20);
    math.add().minus();

    return 0;
}
