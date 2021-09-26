#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string.h>

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
    ifs.open("content.txt");
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
    ifs.open("content.txt"); //文件地址，注意转义符
    string str;
    char delim = ' ';
    while (getline(ifs, str, delim)) // 默认按行读取
    {
        vec.push_back(str);
    }
    if (ifs.is_open())
        ifs.close(); //关闭流
    for (auto word : vec)
        cout << word << " length: " << word.size() << '\n';
}

void test4()
{
    // 一次性读取整个文件
    ifstream fin;
    fin.open("content.txt", ios::in);
    stringstream buf;
    buf << fin.rdbuf();
    string str = buf.str();
    cout << str << "\n";
}

void test5()
{
    //
    ifstream fin("content.txt");
    char buf[20];
    string str;
    //每次从fin流读取一个单词到buf，buf空间大小需要大于单词长度
    while (fin >> buf)
    {
        str += strcat(buf, " ");
    }
    cout << str << "\n";
}

void test6()
{
    //
    ifstream fin("content.txt");
    char buf[1000];
    while (fin.getline(buf, sizeof(buf)))
    {
        std::cout << buf << "xxxxxx\n";
    }
}

void test7()
{
    ifstream in("content.txt");
    string content((istreambuf_iterator<char>(in)), istreambuf_iterator<char>());
    // istreambuf_iterator<char> begin(in), end;
    // string content(begin, end);
    cout << content;
}


int main(int argc, char const *argv[])
{

    test7();

    return 0;
}
