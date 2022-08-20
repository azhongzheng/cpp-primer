#include <iostream>
#include <thread>
#include <string>

void download(std::string file)
{
    for (size_t i = 0; i <= 10; i++)
    {
        std::cout << "Downloading " << file
                  << " (" << i * 10 << "%)..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
}

void interact()
{
    std::string name;
    std::cin >> name;
    std::cout << "Hi," << name << std::endl;
}

int main(int argc, char const *argv[])
{
    std::thread t1([]
                   { download("hello.zip"); });
    interact();
    return 0;
}
