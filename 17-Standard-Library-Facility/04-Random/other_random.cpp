#include <random>
#include <iostream>
#include <vector>
#include <string>

void test1()
{
    std::default_random_engine e;
    std::uniform_real_distribution<double> u(0, 1);
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << u(e) << std::endl;
    }
    std::cout << "u max: " << u.max() << " u min: " << u.min() << std::endl;
    u.reset();
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << u(e) << std::endl;
    }
}

void test2()
{
    std::default_random_engine e;
    std::normal_distribution<> n(4, 1.5); // 均值为4， 标准差为1.5；

    std::vector<unsigned> vals(9);
    for (size_t i = 0; i < 200; i++)
    {
        unsigned v = lround(n(e));
        if (v < vals.size())
        {
            std::cout << v << " ";
            ++vals[v];
        }
    }
    for (size_t j = 0; j < vals.size(); j++)
    {
        std::cout << j << ": " << std::string(vals[j], '*') << std::endl;
    }
}
void test3()
{
    int counter = 0;
    std::default_random_engine e;
    std::bernoulli_distribution b;
    do
    {

        bool first = b(e);
        std::cout << (first ? "we go first" : "you get to go first") << std::endl;
        counter++;
    } while (counter < 10);

    // 设置概率
    std::cout << "设置概率\n";
    int counter1 = 0;
    std::bernoulli_distribution b1(0.55);
    do
    {

        bool first = b1(e);
        std::cout << (first ? "we go first" : "you get to go first") << std::endl;
        counter1++;
    } while (counter1 < 10);
}

int main(int argc, char const *argv[])
{
    // test1();
    test3();
    return 0;
}
