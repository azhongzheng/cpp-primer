#include <iostream>
#include <fstream>
#include <filesystem>
#include <sys/stat.h>

using namespace std;

static const char *filepath = "/Users/azhong/Documents/Project/python-examples/File/file_split/The_Great_Qin_Empire_Bigsize.txt";

void test1()
{

    ifstream fin(filepath);
    if (fin.is_open())
    {
        fin.seekg(0, ios::end);
        double size = fin.tellg() / 1024.0 / 1024.0 / 1024.0;
        fin.close();
        cout << "size of file = " << size << endl;
    }
}

void test2()
{
    double size = std::filesystem::file_size(filepath) / 1024.0 / 1024.0 / 1024.0;
    cout << "size of file = " << size << endl;
}

void test3()
{
    struct stat info;
    stat(filepath, &info);
    double size = info.st_size / 1024.0 / 1024.0 / 1024.0;
    
    cout << "size of file = " << size << endl;
    cout <<info.st_blocks << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    test2();
    test3();
    return 0;
}
