#include <vector>
#include <iostream>

using namespace std;

void test1()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    for (auto &i : v)
    {
        i *= i;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
}

void test2()
{
    vector<int> grades = {42, 65, 95, 100, 39, 67, 96, 76, 88, 76, 83, 92, 76, 93};
    vector<int> scores(11, 0);

    for (auto grade : grades)
    {
        scores[grade / 10] += 1;
    }
    for (auto score : scores)
    {
        cout << score << " ";
    }
    cout << "\n";
    int grade;
    while (cin >> grade)
    {
        scores[grade / 10] += 1;
    }

    for (auto score : scores)
    {
        cout << score << " ";
    }
}

void test3()
{
    vector<int> grades = {42, 65, 95, 100, 39, 67, 96, 76, 88, 76, 83, 92, 76, 93};
    cout << "grades.capacity: " << grades.capacity()
         << "\ngrades.size: " << grades.size()
         << "\ngrades.max_size: " << grades.max_size() << "\n";
}

int main(int argc, char const *argv[])
{
    /* code */
    test3();
    return 0;
}
