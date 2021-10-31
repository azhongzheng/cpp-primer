#include <iostream>
#include "smart_ptr.hpp"
enum class shape_type
{
    circle,
    triangle,
    rectangle,
};

class shape
{
};
class circle : public shape
{
};
class triangle : public shape
{
};
class rectangle : public shape
{
};

shape *create_shape(shape_type type)
{

    switch (type)
    {
    case shape_type::circle:
        return new circle();
    case shape_type::triangle:
        return new triangle();
    case shape_type::rectangle:
        return new rectangle();
    }
}

void test1()
{
    smart_ptr<shape> ptr1{create_shape(shape_type::circle)};
    // smart_ptr<shape> ptr2{ptr1};
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
