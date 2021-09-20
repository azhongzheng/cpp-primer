#include <iostream>
#include <stdio.h>
#include <stdint.h>

using namespace std;

void test1()
{
    unsigned cnt = 42;
    const unsigned sz = 42;
    constexpr unsigned sz1 = 42;
    int arr[10];
    int *parr[sz];
    int *parr1[sz1];
}

void test2()
{
    const unsigned sz = 3;
    int a1[sz] = {0, 1, 2};
    int a2[] = {1, 2, 3};
    int a3[5] = {1, 2, 3};

    string a4[3] = {"hello", "hi", "world"};
}

void test3()
{
    char a1[] = {'C', '+', '+'};
    char a2[] = {'C', '+', '+', '\0'};
    // const char a4[6] = "Daniel"; //空间不够存放空字符
    printf("a1: %s\n", a1);
    printf("a2: %s\n", a2);
    cout << a1 << "\n";
    cout << a2 << "\n";
}

void test4()
{
    int *ptrs[10];
    int16_t arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int16_t (*parray)[10] = &arr; // parray 指向一个含有10个整数的数组
    int16_t (&refarray)[10] = arr;

    cout << parray << "\n";
    cout << refarray << "\n";

    for (int i = 0; i < 10; i++)
    {
        cout << parray[i]<< ":" << (*parray)[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << refarray[i] << " ";
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    // test2();
    test4();
    return 0;
}
