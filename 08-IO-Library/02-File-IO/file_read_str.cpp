#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void test1()
{
    const char *file = "test.txt";
    ifstream in(file);
    if (in.is_open())
        cout << "file open success\n";
    else
        cout << "file open failed\n";
}

void test2()
{
    // 按单词读取文件
    ifstream ifs;
    vector<string> vec;
    ifs.open("Pride and Prejudice.txt");
    string str;
    char c;
    while (ifs.get(c))
    {
        // if (c != ' ' && c != ',' && c != '.' && c!='\n')
        if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
            str += c;
        else
        {
            if (str != "")
                vec.push_back(str);
            str = "";
        }
    }
    if (ifs.is_open())
        ifs.close();

    for (auto word : vec)
        cout << word << " length: " << word.size() << '\n';
}

void test3()
{
    // 按行读取文件
    ifstream ifs;
    vector<string> vec;
    ifs.open("Pride and Prejudice.txt"); //文件地址，注意转义符
    string str;
    while (getline(ifs, str, '\n')) // 默认按行读取
    {
        vec.push_back(str);
    }
    if (ifs.is_open())
        ifs.close(); //关闭流
    for (auto word : vec)
        cout << word << " length: " << word.size() << '\n';
}
int main(int argc, char const *argv[])
{

    test2();

    return 0;
}
