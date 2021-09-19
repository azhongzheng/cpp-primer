#include <iostream>

int main(int argc, char const *argv[])
{
    std::string s = "hello  world !";
    for(auto &c: s)
        if(isspace(c))
            c = 'X';

    std::cout << s << "\n";
    return 0;
}
