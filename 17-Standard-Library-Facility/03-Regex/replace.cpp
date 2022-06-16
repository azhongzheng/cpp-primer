#include <regex>
#include <iostream>
#include <string>

using namespace std;

void test1()
{
    string s1 = "abc456cdef";
    string s2 = "123456789\n";
    regex ex1("\\d+");
    regex ex2("\\n");
    // regex_match 返回真假
    s1 = regex_replace(s1, ex1, "xxx");
    s2 = regex_replace(s2, ex2, "xxx");
    cout << s1 << endl;
    cout << s2 << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
