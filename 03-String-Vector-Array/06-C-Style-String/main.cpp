#include <string.h>
#include <iostream>

using namespace std;

void test1()
{
    char ca[] = {'C', '+', '+'};
    cout << "ca length: " << strlen(ca) << ", ca value: " << ca << "\n";
}

void test2()
{
    //char 字符串的比较和拼接
    char ca1[] = "A string example";
    char ca2[] = "A different  string";
    if (strcmp(ca1, ca2) > 0)
        cout << "ca1 big\n";

    // string longstr = ca1 + " " + ca2; //wrong
    string longstr;
    // strcpy(longstr, ca1);

    longstr = longstr + "a" + 'a';
    cout << longstr << "\n";
}

void test3()
{
    // string and char
    //char[] to char*
    char ch[] = "hello world";
    char *s1 = ch;
    cout << "ch value:" << s1 << "\n";

    // char* to char[]
    char ca[100];
    strcpy(ca, s1);
    cout << "ca value: " << ca << "\n";

    //char[] to string
    // char ca[] = "hello world";
    string s = ca;
    // string s(ca);
    cout << "s value: " << s << "\n";

    // string to char*
    const char *str = s.c_str();
    str = s.data();
    cout << "str value: " << str << "\n";

    // char* to string
    string str1;
    str1 = str;
    cout << "str1 value: " << str1 << "\n";
}

int main(int argc, char const *argv[])
{
    /* code */
    test3();
    return 0;
}
