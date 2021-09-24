#include <regex>
#include <iostream>
#include <string>

using namespace std;

void test1(){
    string s1 = "123456cdef";
    string s2 = "123456789";
    regex ex("\\d+");
    // regex_match 返回真假
    cout << s1 << " is all digit " << regex_match(s1, ex) << endl;
    cout << s2 << " is all digit " << regex_match(s2, ex) << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
