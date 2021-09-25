#include <regex>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

static void search_string(const string &str,
                          const regex &reg_ex)
{
    for (int i = 0; i < str.size() - 1; i++)
    {
        auto substr = str.substr(i, 1);
        if (regex_match(substr, reg_ex))
            cout << substr;
    }
}

void search_by_regex(const char *regex_s, const string &s)
{
    regex reg_ex(regex_s);
    cout.width(12);
    cout << regex_s << ":\"";
    search_string(s, reg_ex);
    cout << "\"" << endl;
}

void test1()
{
    string s("_AaBbCcDdEeFfGg12345 \t\n! @#$%");

    search_by_regex("[[:alnum:]]", s);  //字母和数字
    search_by_regex("\\w", s);          //字母，数字以及下划线
    search_by_regex(R"(\W)", s);        //非字母，数字以及下划线
    search_by_regex("[[:digit:]]", s);  //数字
    search_by_regex("[^[:digit:]]", s); //非数字
    search_by_regex("[[:space:]]", s);  //空白字符
    search_by_regex("\\s", s);          //空白字符
    search_by_regex("\\S", s);          //非空白字符
    search_by_regex("[[:lower:]]", s);  //小写字母
    search_by_regex("[[:upper:]]", s);  //大写字母
    search_by_regex("[[:alpha:]]", s);  // 任意字母
    search_by_regex("[[:blank:]]", s);  //非换行符的空白字符
    search_by_regex("[[:graph:]]", s);  //图形字符
    search_by_regex("[[:print:]]", s);  //可打印字符
    search_by_regex("[[:punct:]]", s);  //标点字符
    search_by_regex("[[:xdigit:]]", s); //十六进制的数字字符
}

static void search_by_regex2(const char *regex_s,
                             const string &s)
{
    regex reg_ex(regex_s);
    smatch match_result;
    cout.width(14);
    if (regex_search(s, match_result, reg_ex))
    {
        cout << regex_s << ": \"" << match_result[0] << "\"" << endl;
    }
}

void test2()
{
    string s("_AaBbCcDdEeFfGg12345!@#$% \t");

    search_by_regex2("[[:alnum:]]{5}", s); // 字符或者数字出现5次
    search_by_regex2("\\w{5,}", s);        // 数字或者下划线出现5次或更多次
    search_by_regex2(R"(\W{3,5})", s);     // 非字母，数字或者下划线出现3次到5次
    search_by_regex2("[[:digit:]]*", s);   // 数字出现任意多次
    search_by_regex2(".+", s);             // 任意字符出现至少1次
    search_by_regex2("[[:lower:]]?", s);   // 小写字母出现0次或者1次
}

void test3(){
    // 忽略大小写
    regex word_regex("regular expressions?", regex::icase);
    ifstream file("./content.txt");
    string line;
    while (getline(file, line))
    {
        auto iter_begin = sregex_iterator(line.begin(), line.end(), word_regex);
        auto iter_end = sregex_iterator();
        for(auto iter = iter_begin; iter != iter_end; iter++){
            cout << iter->str() << endl;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    // test2();
    test3();
    return 0;
}
