#include <sys/stat.h>
#include <time.h>
#include <iostream>
using namespace std;

void test1()
{
    const char *file = "content.txt";
    struct stat info;
    stat(file, &info);
    // tv_nsec nanoseconds纳秒
    // tv_sec  second 秒
    char time1[16];
    char time2[16];
    char time3[16];
    // cout << info.st_mtimespec.tv_nsec << "\n";
    // cout << info.st_mtimespec.tv_sec << "\n";
    strftime(time1, sizeof(time1), "%Y-%m-%d %H:%M:%S", localtime(&info.st_mtimespec.tv_sec));
    cout << time1 << endl;
    strftime(time2, sizeof(time2), "%Y-%m-%d %H:%M:%S", localtime(&info.st_atimespec.tv_sec));
    cout << time2 << endl;
    strftime(time3, sizeof(time3), "%Y-%m-%d %H:%M:%S", localtime(&info.st_ctimespec.tv_sec));
    cout << time3 << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
