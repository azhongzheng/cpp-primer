
#include <vector>
#include <iostream>

using namespace std;

int find(vector<int> text, int sought)
{

    auto begin = text.begin();
    auto end = text.end();
    auto mid = text.begin() + (text.end() - text.begin()) / 2;
    while (mid != end && *mid != sought)
    {
        /* code */
        if (sought < *mid)
        {
            end = mid;
        }
        else
        {
            begin = mid + 1;
        }
        mid = begin + (end - begin) / 2;
    }
    if (*mid == sought)
    {
        return sought;
    }
    else
    {
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> text = {1,2,3,4,9,2,6,4};

    cout << find(text, 10);
    return 0;
}
