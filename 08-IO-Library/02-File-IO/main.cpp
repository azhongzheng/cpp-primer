#include <fstream>

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const char *file = "test.txt";
    ifstream in(file);

    ifstream myfile("data1.txt");

    return 0;
}

