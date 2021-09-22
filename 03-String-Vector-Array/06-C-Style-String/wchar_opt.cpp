#include <string.h>
#include <iostream>
using namespace std;

void test1()
{
    const wchar_t *wch1 = L"hello";
    const wchar_t *wch2 = L"你好";

    cout << "wchar wch1 length: " << wcslen(wch1) << "\n";
    cout << "wchar wch2 length: " << wcslen(wch2) << "\n";
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
