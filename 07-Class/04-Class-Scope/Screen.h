#ifndef SCREEN_H
#define SCREEN_H
#include <string>
#include <iostream>

int height;
class Screen
{
    // 声明类中的成员函数为友元
    // friend void Window_mgr::clear(ScreenIndex i);
    // 声明类为友元
    friend class Window_mgr;

public:
    typedef std::string::size_type pos;
    void setHeight(pos);
    pos height = 0;

    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
    Screen(pos ht = 0, pos wd = 0) : cursor(0), height(ht), width(wd), contents(ht * wd, ' ') {}
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    void some_member() const;

    Screen &set(char);
    Screen &set(pos, pos, char);

    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }
    void dummy_fcn(pos height)
    {
        cursor = width * height; //参数 height
    }
    
    

private:
    pos cursor = 0;
    // pos height = 0;
    pos width = 0;
    std::string contents;

    // mutable 可变数据成员修饰关键字
    mutable size_t access_ctr = 0;

    void do_display(std::ostream &os) const
    {
        os << contents;
    }
};

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

void Screen::some_member() const
{
    access_ctr++;
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

Screen::pos verify(Screen::pos);

// void Screen::setHeight(pos var)
// {
//     height = verify(var);
// }

// void Screen::dummy_fcn(pos ht){
//     cursor = width * this->height; //成员height
//     cursor = width * Screen::height; //成员hegiht 另一种写法
// }

// void Screen::dummy_fcn(pos ht){
//     cursor = width * ::height;
// }

#endif