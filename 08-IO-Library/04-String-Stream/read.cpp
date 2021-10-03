#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

void test1(){
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
    for (auto i : people)
    {
        for(auto p: i.phones){
           cout << i.name << ":" << p << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
