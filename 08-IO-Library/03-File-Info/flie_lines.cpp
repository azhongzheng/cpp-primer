#include <iostream>
#include <fstream>

using namespace std;

static const char *filepath = "/Users/azhong/Documents/Project/python-examples/File/file_split/The_Great_Qin_Empire_Bigsize.txt";

void test1()
{
    // ifstream fin("content.txt");
    ifstream fin(filepath);
    string line;
    long lines_cnt = 0;
    while (getline(fin, line))
    {
        lines_cnt++;
    }
    cout << "line cnt: " << lines_cnt << endl;
    //test1 time :1102.91
}

void test2()
{
    FILE *fp = fopen(filepath, "r");
    fseek(fp, 0, 0);
    long i = 0;
    //long lg=ftell(fp);
    char c;
    while ((c = fgetc(fp)) != EOF)
    {

        if (c == '\n')
            i++;
    }
    cout << "line cnt: " << i << endl;
    //test2 time :1055.82
}

void test3()
{
    ifstream fin(filepath, ios::binary);
    string line;
    long lines_cnt = 0;
    while (getline(fin, line, '\n'))
    {
        lines_cnt++;
    }
    cout << "line cnt: " << lines_cnt << endl;
    //test3 time :1962.22
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    clock_t start_time = clock();
    test2();
    clock_t end_time = clock();
    cout << "test2 time :" << (double)(end_time - start_time) / CLOCKS_PER_SEC << endl;

    start_time = clock();
    test2();
    end_time = clock();
    cout << "test2 time :" << (double)(end_time - start_time) / CLOCKS_PER_SEC << endl;

    start_time = clock();
    test3();
    end_time = clock();
    cout << "test3 time :" << (double)(end_time - start_time) / CLOCKS_PER_SEC << endl;
    return 0;
}
