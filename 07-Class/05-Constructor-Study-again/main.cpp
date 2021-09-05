#include <string>
#include "ConstRef.h"
#include "Sales_data.h"

// class X{
//     int i;
//     int j;
// public:
//     X(int val): j(val), i(j){}
//     // warning: field 'j' is uninitialized when used here
// };

int main(int argc, char const *argv[])
{
    /* code */
    // Sales_data sales_data("hello");
    Sales_data obj();
    return 0;
}
