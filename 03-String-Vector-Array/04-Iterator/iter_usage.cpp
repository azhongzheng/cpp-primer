#include <iostream>
#include <vector>

using namespace std;

void test1()
{
    string s("some thing");
    if (s.begin() != s.end())
    {
        *s.begin() = toupper(*s.begin());
    }
    cout << s << "\n";
}

void test2()
{
    string s("some thing");
    for (auto it = s.begin(); it != s.end() && !isspace(*it); it++)
    {
        *it = toupper(*it);
    }
    cout << s << "\n";
}

void test3()
{
    // 迭代器类型
    vector<int>::iterator it;
    string::iterator it2;

    vector<int>::const_iterator it3;
    string::const_iterator it4;

    vector<int> v;
    const vector<int> cv;

    auto it5 = v.begin();  // vector<int>::iterator
    auto it6 = cv.begin(); // vector<int>::const_iterator
    auto it7 = v.cbegin(); // vector<int>::const_iterator
}

void test4()
{
    vector<string> vs = {"hello", "word", ""};
    // string vs="hello word";
    for (auto it = vs.begin(); it != vs.end(); it++)
    {
        cout << (*it).empty() << "\n";
        // cout << it->empty() << "\n";
    }

    vector<string> text = {"hello", "word", ""};
    for (auto it = text.begin(); it != text.end() && ! it->empty(); it++)
    {
        cout << *it;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    test4();
    return 0;
}
