
#include <iostream>

using namespace std;

void test1()
{
    string str("some thing");
    for (const char c : str)
        cout << c << "\n";
}

void test2()
{
    string s("hello world!!!");
    unsigned punct_cnt = 0;
    for (const char c : s)
        if (ispunct(c))
            punct_cnt++;
    cout << punct_cnt << "\n";
}

void test3()
{
    string s("hello world!!!");
    for (auto &c : s)
    {
        c = toupper(c);
        // cout << toupper(c) << " ";
    }

    cout << s << "\n";
}

void test4()
{
    string str("some thing");
    if (!str.empty())
        str[0] = toupper(str[0]);
    cout << str << "\n";
}

void test5()
{
    string s("hello world!!!");
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); index++)
    {
        s[index] = toupper(s[index]);
    }
    cout << s << "\n";
}

void test6()
{
    cout << "enter a number less than 16\n";
    const string hex = "0123456789ABCDEF";
    int n;
    string result;
    while (cin >> n)
    {
        if (n < hex.size())
        {
            result += hex[n];
        }
    }
    cout << result << "\n";
}

int main(int argc, char const *argv[])
{

    // test1();
    test6();
    return 0;
}
