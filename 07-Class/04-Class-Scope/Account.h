#include <string>

typedef double Money;

std::string bal;

class Account
{
public:
    Money balance() {return bal;}
private:
    // typedef double Money; 不能重新定义
    Money bal;
};