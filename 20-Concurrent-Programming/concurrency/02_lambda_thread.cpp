#include <iostream>
#include <thread>

int main(int argc, char const *argv[])
{
    std::thread t([](){
        std::cout << "Hello, world from lambda thread.\n";
    });
    t.join();
    return 0;
}
