#include <tuple>
#include <iostream>

std::tuple<std::string, int, int> person()
{
    return std::make_tuple("bob", 18, 180);
}

int main(int argc, char const *argv[])
{
    /* code */
    std::string name;
    int age, height;
    std::tie(name, age, height) = person();
    std::cout << "name: " << name << " age: " << age << " height: " << height << std::endl;
    return 0;
}
