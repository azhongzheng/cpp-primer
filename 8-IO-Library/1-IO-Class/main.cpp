// #include <istream>
#include <iostream>
#include <stdio.h>

void while_cin()
{
    int word;
    while (std::cin >> word) {}
}

void set_state()
{
    auto old_state = std::cin.rdstate();
    std::cin.clear();
    // process_input(std::cin);
    std::cin.setstate(old_state);
}

void output_buffer(){
    
    std::cout << "hi!" << std::endl;
    std::cout << std::nounitbuf;
    std::cout << "hi!" << std::flush;
    std::cout << std::nounitbuf;
    std::cout << "hi!" << std::endl;
    std::cout << std::nounitbuf;
}

int main(int argc, char const *argv[])
{


    output_buffer();

    return 0;
}
