#include <iostream>
class Person
{
public:
    Person()
    {
        height = 0;
        age = 0;
    }
    int get_height() { return height; }
    int get_age() { return age; }

private:
    int height;
    int age;
};

int main(int argc, char const *argv[])
{
    /* code */
    Person person;
    std::cout << person.get_height() << std::endl;
    return 0;
}
