#include <iostream>
#include <sstream>

void test1()
{
    char ch;
    while (std::cin.get(ch))
    {
        std::cout.put(ch);
    }
}

void test2()
{
    std::stringstream is("ab");
    char ch;
    // is.unget();

   while ((ch=is.get()) != EOF)
   {
       std::cout.put(ch);
   }
   
    putchar('\n');
}

int main(int argc, char const *argv[])
{
    /* code */
    test2();
    return 0;
}
