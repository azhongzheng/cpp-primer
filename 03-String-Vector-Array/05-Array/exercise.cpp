#include <string>
#include <iostream>

using namespace std;

void test1()
{
    int ia[] = {0, 2, 4, 6, 8};
    int *p1 = &ia[5];
    int *p2 = &ia[5];
    p1 += p2 - p1;
    cout << p1 << "\n";
    cout << *p1 << "\n";
}

void test2()
{
    int ia[] = {0, 2, 4, 6, 8};
    for (int *p = begin(ia); p != end(ia); p++)
    {
        *p = 0;
    }
    for (int i = 0; i < end(ia) - begin(ia); i++)
    {
        cout << ia[i] << " ";
    }
}

bool test3()
{   
    int arr1[] = {0, 2, 4, 6, 7};
    int arr2[] = {0, 2, 4, 6, 8};
    if (sizeof(arr1) / sizeof(int) == sizeof(arr2) / sizeof(int))
    {
        for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
        {
            if (arr1[i] != arr2[i])
                return false;
        }
        return true;
    }
    else
        return false;
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    // test2();
    cout << test3() << "\n";
    return 0;
}
