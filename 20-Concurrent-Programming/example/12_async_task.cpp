#include <cmath>
#include <future>
#include <iostream>
#include <thread>
#include <chrono>

static const int MAX = 10e8;
static double sum = 0;

void worker(int min, int max)
{
    for (int i = min; i <= max; i++)
    {
        sum += sqrt(i);
    }
}
void worker_func()
{
    sum = 0;
    auto f1 = std::async(worker, 0, MAX);
    std::cout << "Async task trigered" << std::endl;
    f1.wait();
    std::cout << "Async task finish, result:" << sum
              << std::endl;
}

void worker_lambda_func()
{
    double result = 0;
    std::cout << "Async task with lambda triggered, thread: "
              << std::this_thread::get_id() << std::endl;

    auto f2 = std::async(std::launch::async, [&result]
                         {
        std::cout << "Lambda task in thread: " << std::this_thread::get_id() << std::endl;
        for (int i = 0; i < MAX; i++)
            result += sqrt(i); });
    f2.wait();
    std::cout << "Async task with lambda finish, result: " << result
              << std::endl;
}

class Worker
{
public:
    Worker(int min, int max) : mMin(min), mMax(max) {}

    double work()
    {
        mResult = 0;
        for (int i = mMin; i < mMax; i++)
            mResult += sqrt(i);
        return mResult;
    }
    double getResult() { return mResult; }

private:
    int mMin;
    int mMax;
    double mResult;
};

void worker_class()
{
    Worker w(0, MAX);
    std::cout << "Task in class triggered" <<std::endl;;
    auto f3 = std::async(&Worker::work, &w);
    f3.wait();
    std::cout << "Task in class finish, result: " << w.getResult()
              << std::endl;
}

int main(int argc, char const *argv[])
{
    auto start_time = std::chrono::steady_clock::now();
    worker_func();
    auto end_time = std::chrono::steady_clock::now();
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    std::cout << "worker_func:" << ms << "ms consumed\n"
              << std::endl;

    start_time = std::chrono::steady_clock::now();
    worker_lambda_func();
    end_time = std::chrono::steady_clock::now();
    ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    std::cout << "worker_lambda_func:" << ms << "ms consumed\n"
              << std::endl;

    start_time = std::chrono::steady_clock::now();
    worker_class();
    end_time = std::chrono::steady_clock::now();
    ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    std::cout << "worker_class:" << ms << "ms consumed\n"
              << std::endl;
    return 0;
}
