#include <iostream>
#include <fstream>

int modify_file()
{
    std::fstream inOut("copyOut", std::fstream::ate | std::fstream::in | std::fstream::out);
    if (!inOut)
    {
        std::cerr << "Unable to open ifle!" << std::endl;
        return EXIT_FAILURE;
    }
    auto end_mark = inOut.tellg();
    inOut.seekg(0, std::fstream::beg);
    size_t cnt = 0;
    std::string line;
    while (inOut && inOut.tellg() != end_mark && getline(inOut, line))
    {
        cnt += line.size() + 1;
        auto mark = inOut.tellg();         // 当前读取的位置
        inOut.seekp(0, std::fstream::beg); //写标记移到文件末尾
        inOut << cnt;
        if (mark != end_mark)
            inOut << " ";
        inOut.seekg(mark);
    }
    inOut.seekg(0, std::fstream::end);
    inOut << "\n";
    return EXIT_SUCCESS;
}

void test1(){
    
}

int main(int argc, char const *argv[])
{
    /* code */
    modify_file();
    return 0;
}
