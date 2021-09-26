#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void test1()
{
    // ifstream fin("content.txt", ios::in | ios::binary);
    ifstream fin("shot.png", ios::in | ios::binary);

    char buf[1000];

    while (fin.getline(buf, sizeof(buf)))
    {
        std::cout << buf << "\n";
    }
}

void test2()
{
    //  二进制先读后写
    ifstream ifs;
    ofstream ofs;

    ifs.open("shot.png", ios::in | ios::binary);
    ofs.open("shotopy.png", ios::binary);

    char c;
    while (ifs.get(c))
    {
        cout << c;
        ofs.put(c);
    }
}

void test3()
{
    // 先写后读
    ofstream ofs;
    ifstream ifs;
    ofs.open("test.txt", ios::binary);

    for (int i = 0; i < 128; i++)
    {
        ofs.put(i);
    }
    ofs.close();
    char c;
    ifs.open("test.txt", ios::binary);
    while (ifs.get(c))
    {
        cout << c;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    test3();
    return 0;
}
