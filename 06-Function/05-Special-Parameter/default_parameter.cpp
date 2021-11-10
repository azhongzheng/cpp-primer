#include <iostream>

std::string screen(int ht, int wid = 20, char background = ',')
{
    // 默认参数必须位于参数列表最右侧
    std::string wid_char = std::string(wid, background) + '\n';
    std::string screen_char;
    for (int i = 0; i < ht; i++)
    {
        screen_char += wid_char;
    }
    return screen_char;
}

int main(int argc, char const *argv[])
{

    std::cout << screen(10);
    std::cout << screen(10, 5);
    std::cout << screen(5, 6, '#');
    return 0;
}
