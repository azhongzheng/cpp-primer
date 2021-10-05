#include <vector>
#include <iostream>


#define VNAME(value) (#value)

using namespace std;

template <typename T>
void print(vector<T> &vec)
{
    cout << VNAME(vec) << ": [";
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        if (it == (vec.end() - 1))
            cout << *it;
        else
            cout << *it << ",";
    }
    cout << "]\n";
}

void test1()
{
    vector<int> vec = {1, 4, 3, 3, 2, 2, 3};
    cout << "vec max size: "<< vec.max_size() << endl;;
    cout << "vec size: "<< vec.size() << endl;
    cout << "vec empty: "<< vec.empty() << endl;
    print(vec);
    
}

void test2(){
    vector<int> vec = {1, 4, 3, 3, 2, 2, 3};
    for (auto iter = vec.begin(); iter != vec.end();)
    {
        if (*iter==3)
        {
            iter = vec.erase(iter);
        }
        else{
            iter++;
        }
    }
    print(vec);
    vec.erase(vec.begin(), vec.end());
    print(vec);
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    return 0;
}
