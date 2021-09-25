#include <regex>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void test1()
{
    string s1 = "123456cdef";
    string s2 = "123456789";
    regex ex("\\d+");
    // regex_match 返回真假
    cout << s1 << " is all digit " << regex_match(s1, ex) << endl;
    cout << s2 << " is all digit " << regex_match(s2, ex) << endl;
}

void test2()
{
    regex word_regex(R"((\d{2})(\d{2})s)");
    ifstream file("content.txt");
    string line;

    while (getline(file, line))
    {
        auto iter_begin = sregex_iterator(line.begin(),
                                          line.end(),
                                          word_regex);
        auto iter_end = sregex_iterator();
        for (auto iter = iter_begin; iter != iter_end; iter++)
        {
            cout << "Match content: " << iter->str(0) << ",";
            cout << "group Size: " << iter->size() << endl;

            cout << "Century: " << iter->str(1) << ", ";
            cout << "length: " << iter->length(1) << ", ";

            cout << "position: " << iter->position(1) << endl;
            auto year = (*iter)[2]; 
            // // cout << "Year: " << iter->str(2) << ", ";
            cout << "Year: " << year << ", ";
            cout << "length: " << year.length() << ", ";
            cout << "position: " << iter->position(2) << endl;
            cout << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    test2();
    return 0;
}
