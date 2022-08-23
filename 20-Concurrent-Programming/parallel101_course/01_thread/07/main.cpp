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

class ThreadPool{
public:
    void push_back(std::thread thr){
        m_pool.push_back(std::move(thr));
    }
    ~ThreadPool(){
        for(auto &t: m_pool)
            t.join();
    }
private:
    std::vector<std::thread> m_pool;

};
ThreadPool tpool;
void interact()
{
    std::string name;
    std::cin >> name;
    std::cout << "Hi," << name << std::endl;
}



void myfunc(){
    std::thread t1([]
                   { download("hello.zip"); });
    tpool.push_back( std::move(t1));
}

int main(int argc, char const *argv[])
{
    myfunc();
    interact();

    return 0;
}
