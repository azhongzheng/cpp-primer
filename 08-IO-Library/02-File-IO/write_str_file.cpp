#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void test1()
{
    ofstream out("write_test.txt");
    out << "hello world";
    out.close();
}

void test2()
{
    ofstream out("write_test_app.txt", ios::app);
    for (auto i : {1, 2, 3})
        out << " " << i;
    out.close();
}

void test3()
{
    ofstream out("write_test_app.txt", ios::out);
    for (auto i : {1, 2, 3, 4}){
        out << " " << i;
    }
        
    out.close();
}

int main(int argc, char const *argv[])
{
    /* code */
    test3();
    return 0;
}
