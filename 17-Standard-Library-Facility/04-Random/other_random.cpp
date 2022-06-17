#include <random>
#include <iostream>
#include <vector>
#include <string>

void test1(){
    std::default_random_engine e;
    std::uniform_real_distribution<double> u(0,1);
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << u(e) << std::endl;
    }
    std::cout << "u max: " << u.max() << " u min: "<< u.min() << std::endl;
    u.reset();
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << u(e) << std::endl;
    }
}

void test2(){
    std::default_random_engine e;
    std::normal_distribution<> n(4, 1.5); // 均值为4， 标准差为1.5；

    std::vector<unsigned> vals(9);
    for (size_t i = 0; i < 200; i++)
    {
        unsigned v = lround(n(e));
        if(v < vals.size())
            ++vals[v];
    }
    for (size_t j = 0; j < vals.size(); j++)
    {
       std::cout << j << ": " << std::string(vals[j], '*') << std::endl;
    }
    
    
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();
    return 0;
}

