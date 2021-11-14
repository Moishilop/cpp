# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <iomanip>
# include <math.h>

int main(int argc, char **argv)
{
    double  d;
    int     flag = 0;
    std::string str;

    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (0);
    }
    str = argv[1];
    if (str.length() == 1)
    {
        if (!std::isdigit(str[0]))
        {
            std::cout << "char : "<< static_cast<char>(str[0]) << std::endl;
            d = static_cast<char>(str[0]);
            flag = 1;
        }
        else
            d = atof(argv[1]);
    }
    else
    {
        d = atof(argv[1]);
    }
    //->to char
    if (isnan(d) || isinf(d))
        std::cout << "char : impossible" << std::endl;
    else if ((d >= 127 || d <= 32) && (!flag))
        std::cout << "char : Non displayable" << std::endl;
    else
        if (!flag)
            std::cout << "char : "<< static_cast<char>(d) << std::endl;
    //->to int
    if (d > 2147483647 || d < -2147483648 || isnan(d))
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int : "<< static_cast<int>(d) << std::endl;
    //to float
    if (str.find(".") == std::string::npos && !isnan(d) && !isinf(d)) {
        std::cout << "float : " << static_cast<float>(d) << ".0" << "f" << std::endl;
        std::cout << "double : " << d << ".0" << std::endl;
    }
    else {
        std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double : " << d << std::endl;
    }
}