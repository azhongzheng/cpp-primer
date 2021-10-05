#include <list>
#include <iostream>
#include <string>
using namespace std;

void test1()
{
    list<int> ls = {1, 4, 3, 3, 2, 2, 3};
    for(auto it = ls.begin(); it!=ls.end(); it++)
        cout << *it<< ",";
    cout << "\n";

    for (auto iter = ls.begin(); iter != ls.end();)
    {
        if (*iter==3)
        {
            iter = ls.erase(iter);
        }
        else{
            iter++;
        }
    }

    for(auto it = ls.begin(); it!=ls.end(); it++)
        cout << *it<< ",";
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
