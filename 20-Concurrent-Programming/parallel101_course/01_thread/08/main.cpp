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


std::vector<std::jthread> pool;

void myfunc() {
    std::jthread t1([&] {
        download("hello.zip");
    });
    // 移交控制权到全局的 pool 列表，以延长 t1 的生命周期
    pool.push_back(std::move(t1));
}


int main(int argc, char const *argv[])
{
    myfunc();
    interact();

    return 0;
}
