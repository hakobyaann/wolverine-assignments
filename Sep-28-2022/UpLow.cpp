#include <iostream>

void upper_lower(std::string&);

int main()
{
    std::string str = "Hello World";
    upper_lower(str);
    std::cout << str;
return 0;
}

void upper_lower(std::string& str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
            ++i;
        }
        else //if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            ++i;
        }

    }
}
