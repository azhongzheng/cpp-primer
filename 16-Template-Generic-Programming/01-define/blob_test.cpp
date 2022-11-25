

#include "Blob.h"
#include <iostream>
#include "BlobPtr.h"

int main(int argc, char *argv[]) {
    Blob<int> ia;

    Blob<std::string> articles = {"a", "an", "the"};
    articles.push_back("e");

    std::cout << ia.empty() << std::endl;
    std::cout << articles.size() << std::endl;

    std::cout << articles[articles.size() - 1] << std::endl;
    articles.pop_back();
    std::cout << articles[articles.size() - 1] << std::endl;

    Blob<int> squares = {0, 1, 2, 7, 4, 5, 6};
    std::cout << squares[1] << std::endl;
    for (int i = 0; i < squares.size(); i++) {

        squares[i] = squares[i] * squares[i];
    }

    for (int i = 0; i < squares.size(); i++) {
        std::cout << squares[i] << " ";
    }

    BlobPtr<int> blobprt;
    BlobPtr<int> blobprt1(squares, 1);

    return 0;
}