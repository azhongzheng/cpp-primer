#include "Screen.h"
#include "Window_mgr.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    // Screen myscreen;
    // char ch = myscreen.get();
    // ch = myscreen.get(0, 0);

    // myscreen.some_member();

    // myscreen.move(4, 0).set('#');

    Screen myscreen(5, 3);
    const Screen blank(5, 3);

    myscreen.set('#').display(std::cout);
    std::cout << std::endl;

    blank.display(std::cout);
    std::cout << std::endl;

    Screen myscreen1(5, 5, 'X');
    myscreen1.display(std::cout);
    std::cout << std::endl;
    myscreen1.move(4, 0).set('#').display(std::cout);


    return 0;
}
