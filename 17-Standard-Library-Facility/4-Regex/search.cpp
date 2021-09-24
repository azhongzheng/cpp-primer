#include <regex>
#include <iostream>
#include <string>

using namespace std;

void test1(){
    string s = "a123456cdef321";
    regex ex("\\d+");
    smatch match;
    regex_search(s, match, ex);
    // regex_match 返回真假
    cout << s << " contain digit " << match[0] << endl;
}

void test2(){
    const char* s = "a123456cdef321";
    regex ex("\\d+");
    cmatch match;
    regex_search(s, match, ex);
    // regex_match 返回真假
    cout << s << " contain digit " << match[0] << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
