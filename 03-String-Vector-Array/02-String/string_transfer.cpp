#include <iostream>
#include <sstream>
#include <iomanip>

void test1()
{
    std::cout << std::stoi("42") << std::endl;
    std::cout << std::stoi("43 yuan") << std::endl;
    size_t pos;
    std::cout << std::stoi("43 yuan", &pos) << std::endl;
    std::cout << "43 yuan结束位置: " << pos << std::endl;
    std::cout << std::stoi("0a", nullptr, 16) << std::endl;
    std::cout << std::stoi("FF", nullptr, 16) << std::endl;
    std::cout << std::stoi("110", nullptr, 2) << std::endl;
    std::cout << std::stof("3.14e3") << std::endl;
}



void test2()
{
    std::cout << std::to_string(18.3) << std::endl;
    std::stringstream ss;
    ss << std::setprecision(4) << 3.1415926535;
    std::string s = ss.str();
    std::string sss = (std::stringstream() << std::setprecision(4) << 3.1415926535).str();
    std::cout << s << std::endl;
    std::cout << sss << std::endl;

    float f;
    std::stringstream("3.14") >> f;
    std::cout << f << std::endl;
}


int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}
