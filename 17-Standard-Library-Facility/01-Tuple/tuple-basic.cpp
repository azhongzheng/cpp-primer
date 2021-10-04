#include <iostream>
#include <tuple>

void test1(){
    std::tuple<size_t, size_t, size_t> tp1;
    tp1 = std::make_tuple(1,2,3);
    std::tuple<int, std::string, double> tp2(10, "hello world", 10.1);
    std::cout << std::get<0>(tp2) << std::endl;
    std::cout << std::get<1>(tp2) << std::endl;
    std::cout << std::get<2>(tp2) << std::endl;
    
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
