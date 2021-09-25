#include <string>
#include <fstream>
#include <regex>
#include <iostream>
using namespace std;

void test1()
{
    regex word_regex("[[:alpha:]]+");
    ifstream file("./content.txt");
    string line;
    int word_count = 0;
    while (getline(file, line))
    {
        auto iter_begin = sregex_iterator(line.begin(),
                                         line.end(),
                                         word_regex);

        auto iter_end = sregex_iterator();
        for(auto iter = iter_begin; iter != iter_end; iter++){
            cout << iter->str() << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
