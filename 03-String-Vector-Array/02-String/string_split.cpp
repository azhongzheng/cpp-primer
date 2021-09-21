#include <string>
#include <vector>
#include <iostream>

void split1(const std::string &str, std::vector<std::string> &tokens, const char delim)
{
    tokens.clear();
    int p = -1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == delim)
        {
            if(str.substr(p + 1, i - p - 1).size())
                tokens.emplace_back(str.substr(p + 1, i - p-1)); //(p,i)
            p = i;
        }
    }
    tokens.emplace_back(str.substr(p + 1));
}

void split2(const std::string& str, std::vector<std::string>& tokens, const std::string delim){
    tokens.clear();
    int p=-1;
    for(int i=0;i<str.size();i++)
    {
        if(delim.find(str[i])!=std::string::npos)
        {
            tokens.emplace_back(str.substr(p+1,i-p-1)); //(p,i)
            p=i;
        }
    }
    tokens.emplace_back(str.substr(p+1));
}


int main(int argc, char const *argv[])
{
    std::vector<std::string> v = {"hello", "world"};
    v.insert(v.begin() + 1, "xx");
    // v.clear();

    std::string str("hello,,,,,world");
    std::vector<std::string> v1;

    split1(str, v1, ',');

    for (auto word : v1)
    {
        std::cout << word << "\n";
    }

    std::cout << str.find(",") << "\n";

    return 0;
}
