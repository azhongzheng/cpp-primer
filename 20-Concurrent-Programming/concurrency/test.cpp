#include <iostream>

class Person
{
public:
    Person(std::string name, int age) : name(name), age(age) {}
    std::string* get_name(){
        return &name;
    }
    int get_age(){
        return age;
    }
private:
    std::string name;
    int age;
};
int main(int argc, char const *argv[])
{
    /* code */
    Person* bob = new Person("bob", 18);
    std::cout << *bob->get_name() << std::endl;
    return 0;
}
