#include <iostream>
#include <tuple>
using namespace std;
void test1()
{
    tuple<size_t, size_t, size_t> tp1(1,1,1);
    tp1 = make_tuple(1, 2, 3);
    tuple<int, string, double> tp2(10, "hello world", 10.1);
    cout << "tp2第二个元素的值: " << get<0>(tp2) << endl;
    cout << "tp1个数: " << tuple_size<decltype(tp1)>::value << endl;
    // std::tuple_element<1, decltype(tp2)>::type ages;
    int x, y, z;
    std::tie(x, y, z) = tp1;
    cout << "x: " << 1 << " y: "<<y << " z: " << z << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
