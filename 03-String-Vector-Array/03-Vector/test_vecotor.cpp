#include "Vector.h"

struct C
{
    C();                       // 默认构造函数
    C(C const &c);             // 拷贝构造函数
    C(&&c);                    // 移动构造函数
    C &operator=(C const &c);  // 拷贝赋值函数
    C &operator=(C const &&c); // 移动赋值函数
    ~C();
};

// 拷贝构造函数 C c1 = c2
// 移动构造函数 C c1 = std::move(c2)

// 拷贝赋值函数 c1 = c2
// 移动赋值函数 c1 = std::move(c2)

// 移动构造函数 C c1 = C()
// 移动赋值函数 c1 = C()
// 移动赋值函数 return c2

int main(int argc, char const *argv[])
{
    Vector v(2);
    v[0] = 4;
    v[1] = 3;
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }

    return 0;
}
