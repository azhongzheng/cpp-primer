
#include "Blob.h"
#include <iostream>

int main(int argc, char *argv[]) {
    Blob<int> ia;
    Blob<int> ia2 = {0, 1, 2, 3};
    Blob<std::string> articles = {"a", "an", "the"};
    articles.push_back("e");

    std::cout << ia.empty() << std::endl;
    std::cout << articles.size() << std::endl;
    
    std::cout << articles[articles.size() - 1] << std::endl;
    articles.pop_back();
    std::cout << articles[articles.size() - 1] << std::endl;


    return 0;
}