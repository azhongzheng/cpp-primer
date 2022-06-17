#include <random>
#include <iostream>
#include <vector>

void test1()
{
    std::default_random_engine e;
    for (int i = 0; i < 10; ++i)
        std::cout << e() << std::endl;

    std::default_random_engine e1(100);
    std::cout << "随机种子" << std::endl;
    for (int i = 0; i < 10; ++i)
        std::cout << e1() << std::endl;

    e.seed(100);
    std::cout << "使用种子 100 重置引擎状态" << std::endl;
    for (int i = 0; i < 10; ++i)
        std::cout << e() << std::endl;

    std::cout << "e max:" << e.max() << "e1 max: " << e1.max() << std::endl;
}
void test2()
{
    std::uniform_int_distribution<unsigned> u(0, 9);
    std::default_random_engine e;
    for (int i = 0; i < 10; ++i)
        std::cout << u(e) << std::endl;
}

std::vector<unsigned> bad_vec()
{
    std::default_random_engine e;
    std::uniform_int_distribution<unsigned> u(0, 9);
    std::vector<unsigned> ret;
    for (size_t i = 0; i < 10; i++)
        ret.push_back(u(e));
    return ret;
}

std::vector<unsigned> good_vec()
{
    static std::default_random_engine e;
    static std::uniform_int_distribution<unsigned> u(0, 9);
    std::vector<unsigned> ret;
    for (size_t i = 0; i < 10; i++)
        ret.push_back(u(e));
    return ret;
}

void test_vec()
{
    std::vector<unsigned> v1(bad_vec());
    std::vector<unsigned> v2(bad_vec());
    std::cout << "bad_vec:" << (v1 == v2 ? "equal" : "not equal") << std::endl;

    std::vector<unsigned> v3(good_vec());

    std::vector<unsigned> v4(good_vec());
    for (auto i : v3)
        std::cout << i << " ";

    std::cout << std::endl;
    for (auto i : v4)
        std::cout << i << " ";

    std::cout << "good_vec:" << (v3 == v4 ? "equal" : "not equal") << std::endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    test_vec();
    // for (auto i : good_vec())
    // {
    //     std::cout << i << " ";
    // }
    return 0;
}
