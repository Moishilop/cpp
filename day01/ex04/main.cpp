#include "Replace.hpp"

int main(int argc, char **argv)
{
    std::string str;
    int         pos;
    std::string s1;
    std::string s2;

    if (argc != 4)
		return (0);
	Replace replace(argv[1], argv[2], argv[3]);
    std::ofstream fout(replace.getFilename());
    if (!fout)
    {
        std::cout << "Sorry, file can not be open for writing" << std::endl;
        return (0);
    }
    std::ifstream inf(argv[1]);
    if (!inf)
    {
        std::cout << "Sorry, file can not be open for reading" << std::endl;
        return (0);
    }
    s1 = replace.getStr1();
    s2 = replace.getStr2();
    while (!inf.eof())
    {   
        getline(inf, str);
        pos = 0;
        while (1)
        {
            pos = str.find(s1, pos);
            if ((size_t)pos != std::string::npos)
            {   
                str.erase(pos, s1.length());
                str.insert(pos, s2, 0, s2.length());
                pos = pos + s2.length();
            }
            else
                break ;
        }
        fout << str << std::endl;
    }
    fout.close();
    inf.close();
    return(0);
}