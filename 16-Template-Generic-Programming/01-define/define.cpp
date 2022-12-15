#include <cstring>
#include <functional>
#include <iostream>
#include <iterator>

template <typename T>
int compare(const T &v1, const T &v2) {
    if (*v1 == *v2)
        return 0;
    else
        return *v1 < *v2 ? -1 : 1;
}
template <typename T>
int compare_less(const T &v1, const T &v2) {
    if (std::less<T>()(v1, v2)) {
        return -1;
    }
    if (std::less<T>()(v2, v1)) {
        return 1;
    }
    return 0;
}

template <unsigned N, unsigned M>
int compare_str(const char (&p1)[N], const char (&p2)[M]) {
    return strcmp(p1, p2);
}

template <typename T>
T foo(T *p) {
    T temp = *p;
    return temp;
}

int main(int argc, char *argv[]) {
    int val1 = 15, val2 = 14;
    std::cout << "compare: " << compare(&val1, &val2) << std::endl;
    std::cout << "foo: " << foo(&val1) << std::endl;
    // std::cout << strcmp("hello", "world") << std::endl;
    const char p1[] = "hi";
    const char p2[] = "mon";
    // const char *p3 = "hdddddddddddddddddddddddi";

    std::cout << p1 << std::endl;
    // std::cout << "p1:" << sizeof(p1) << ", p3:" << sizeof(p3) << std::endl;
    std::cout << "compare_str: " << compare_str(p1, p2) << std::endl;

    std::cout << "compare_less: " << compare_less(val1, val2) << std::endl;

    return 0;
}