#include <cstdlib>
#include <iostream>

class Vector
{
public:
    Vector(size_t n)
    {
        m_size = n;
        m_data = (int *)malloc(n * sizeof(int));
    }

    ~Vector()
    {
        free(m_data);
    }
    // Vector(Vector const &) = delete;
    Vector(Vector const &other)
    {
        m_size = other.m_size;
        m_data = (int *)malloc(m_size * sizeof(int));
        memcpy(m_data, other.m_data, m_size * sizeof(int));
    }
    // Vector &operator=(Vector const &other)
    // {
    //     this->~Vector();
    //     new (this) Vector(other);
    //     return *this;
    // }

    // 为了性能不释放空间，直接扩充
    Vector &operator=(Vector const &other)
    {
        m_size = other.m_size;
        m_data = (int *)malloc(m_size * sizeof(int));
        memcpy(m_data, other.m_data, m_size * sizeof(int));
        return *this;
    }

    size_t size() { return m_size; }

    void resize(size_t size)
    {
        m_size = size;
        m_data = (int *)realloc(m_data, m_size);
    }

    int &operator[](size_t index)
    {
        return m_data[index];
    }

private:
    size_t m_size;
    int *m_data;
};