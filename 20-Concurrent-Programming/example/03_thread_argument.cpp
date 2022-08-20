#include <iostream>
#include <thread>

void hello(std::string name){
    std::cout << "Hello, " << name << "!\n";
}

int main(int argc, char const *argv[])
{
    std::thread t(hello, "azhong");
    t.join();
    return 0;
}
