#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

bool valid(const string str)
{
    for (auto &s : str)
    {
        if (!isdigit(s))
            return false;
    }
    return true;
}
void test1()
{
    string line, word;
    vector<PersonInfo> people;
    while (getline(cin, line))
    {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    for (const auto &entry : people)
    {
        ostringstream formated, badNumber, os;
        for (const auto num : entry.phones)
        {
            if (!valid(num))
                badNumber << " " << num;
            else
                formated << " " << num;
        }

        if (badNumber.str().empty())
        {
            os << entry.name << " " << formated.str() << endl;
        }
        else
        {
            cerr << "input error: " << entry.name << " invalid number(s) " << badNumber.str() << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
