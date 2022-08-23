#include <iostream>
#include <thread>
#include <string>
#include <vector>

void download(std::string file)
{
    for (size_t i = 0; i <= 10; i++)
    {
        std::cout << "Downloading " << file
                  << " (" << i * 10 << "%)..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "Download complete: " << file << std::endl;
}

void interact()
{
    std::string name;
    std::cin >> name;
    std::cout << "Hi," << name << std::endl;
}

std::vector<std::thread> pool;

void myfunc(){
    std::thread t1([]
                   { download("hello.zip"); });
    pool.push_back( std::move(t1));
}

int main(int argc, char const *argv[])
{
    myfunc();
    interact();
    pool[0].join();
    return 0;
}
