#include <iostream>

bool startsWith(std::string, std::string);

int main()
{
    std::string str = "Hello World!";
    std::string st = "Heil";
    bool result = startsWith(str, st);
    std::cout << result << std::endl;

return 0;
}

bool startsWith(std::string str, std::string st)
{
    int i = 0;
    bool flag = false;
    while (st[i] != '\0')
    {
        if (str[i] == st[i])
        {
            flag = true;
            ++i;
        }
        else
        {
            flag = false;
            break;
        }
    }
return flag;
}

