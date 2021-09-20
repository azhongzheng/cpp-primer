#include <iostream>
#include <vector>

using namespace std;

void test1()
{
    string word;
    vector<string> words;
    //mac 文件结束符 control+d
    while (cin >> word)
    {
        for (auto &c : word)
        {
            c = toupper(c);
        }
        words.push_back(word);
    }
    for (auto word : words)
        cout << word << " ";
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
