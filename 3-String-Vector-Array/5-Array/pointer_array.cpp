#include <string>
#include <iostream>

using namespace std;

void test1()
{
    string nums[] = {"one", "two", "three"};
    string *p = nums;
    string &pr = *nums;
    cout << p << "\n";
    cout << pr << "\n";
}

void test2()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    ++p;
    cout << "p++ values: " << *p << "\n";

    int *e = &arr[10]; //指向尾元素的下一个指针

    int *e1 = end(arr);
    cout << "compare e1 and e: " << (e1 == e) << "\n";

    cout << "e value: " << *e << "\n";

    cout << "arr address: " << arr << "\n";
    cout << "arr address: " << begin(arr) << "\n";
    cout << "arr address: " << (&arr) + 1 << "\n";
    cout << "arr address: " << arr + 1 << "\n";

    cout << "arr[10] address: " << &arr[10] << "\n";
    cout << "arr[10] address: " << end(arr) << "\n";
    cout << "arr[10] address: " << arr + sizeof(arr) / sizeof(int) << "\n";

    for (auto b = arr; b != e; b++)
        cout << *b << " ";
}

void test3()
{
    int ia[] = {0, 2, 4, 6, 8};
    int last = *(ia+4);
}



int main(int argc, char const *argv[])
{
    /* code */
    test3();
    return 0;
}
