#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


void test1(){
    ofstream out("test_write.txt");
    out<< "hello world";
    out.close();
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
