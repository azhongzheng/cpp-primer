#include <memory>
#include <iostream>

void test1(){
    std::shared_ptr<int>p = std::make_shared<int>(42);
    std::weak_ptr<int> wp(p);

    if(std::shared_ptr<int> np = wp.lock()){
        std::cout << "np存在" << std::endl;
    }

}

int main(int argc, char const *argv[])
{
    /* code */
    test1();
    return 0;
}
