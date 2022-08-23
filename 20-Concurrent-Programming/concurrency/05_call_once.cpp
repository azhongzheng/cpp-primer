#include <iostream>
#include <thread>

void init() {
    std::cout << "Initialing...\n";
}

void worker(std::once_flag* flag){
    call_once(*flag, init);
}

int main(int argc, char const *argv[])
{
    /* code */
    std::once_flag flag;
    std::thread t1(worker, &flag);
    std::thread t2(worker, &flag);
    std::thread t3(worker, &flag);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
