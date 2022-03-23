#include <ratio>
#include <iostream>

void test()
{
    // std::ratio<2, 3> two_thirds;
    // std::ratio<1, 6> one_sixth;
    // auto sum = std::ratio_add<two_thirds, one_sixth>;
    using two_third = std::ratio<2, 3>;
    using one_sixth = std::ratio<1, 6>;

    using sum = std::ratio_add<two_third, one_sixth>;
    std::cout << "sum: " << sum::num << "/" << sum::den << std::endl;
    std::cout << std::ratio<2, 3>::num << "/" << std::ratio<2, 3>::den << std::endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
