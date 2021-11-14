#include <iostream>
#include <string>
#include <fstream>

class Replace
{
    private:
        std::string s1;
        std::string s2;
        std::string f_name;
    public:
        Replace(std::string filename, std::string s1, std::string s2);
        ~Replace();
        std::string getFilename(void);
        std::string getStr1(void);
        std::string getStr2(void);
};