#include <bitset>
#include <iostream>

void test1()
{
    std::bitset<8> bits1(1U);
    std::cout << bits1 << std::endl;

    std::bitset<8> bits2(std::string("1111111000"), 6, 6, '0', '1');
    std::bitset<8> bits3(std::string("eeeeeeeooo"), 6, 6, 'o', 'e');
    std::bitset<8> bits4(std::string("1111111000"), 6, 6, '1', '0');
    char ch[] = "1010101010";
    std::bitset<8> bits5(ch, 6, '0', '1');
    std::cout << bits2 << std::endl;
    std::cout << bits3 << std::endl;
    std::cout << bits4 << std::endl;
    std::cout << bits5 << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
