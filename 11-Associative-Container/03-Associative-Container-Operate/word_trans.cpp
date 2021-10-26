#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>

template <typename T>
void print_map(T &t)
{
    for (auto i : t)
        std::cout << i.first << ": " << i.second << "\n";
}

std::map<std::string, std::string> buildMap(std::ifstream &map_file)
{
    std::map<std::string, std::string> trans_map;
    std::string key;
    std::string value;
    // while (map_file >> key && getline(map_file, value))
    while (map_file >> key && map_file >> value)
    {
        if (value.size() > 0)
            trans_map[key] = value;
        else
            throw std::runtime_error("no rule for " + key);
    }
    return trans_map;
}

std::string transform(std::string &s, std::map<std::string, std::string> &m)
{
    auto ret = m.find(s);
    if (ret != m.end())
        return ret->second;
    return s;
}

void word_transform(std::ifstream &map_file, std::ifstream &input)
{
    auto trans_map = buildMap(map_file);
    std::string text;
    while (getline(input, text))
    {
        std::stringstream stream(text);
        std::string word;
        bool firstword = true;
        while (stream >> word)
        {
            if (firstword)
                firstword = false;
            else
                std::cout << " ";
            std::cout << transform(word, trans_map);
        }
        std::cout << std::endl;
    }
}
int main(int argc, char const *argv[])
{
    std::ifstream map_file("mapfile.txt");
    std::ifstream input("source.txt");
    word_transform(map_file, input);
    return 0;
}
