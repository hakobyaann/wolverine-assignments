#include <iostream>
#include <vector>

std::vector<std::string> split(std::string, const char&);

int main()
{
    std::string str = "Hello world";
    std::vector<std::string>result = split(str, 'l'); 
    for (auto i : result)
    {
        std::cout << i;
    }
return 0;
}

std::vector<std::string> split(std::string str, const char& c)
{
    std::string st = "";
    int i = 0;
    std::vector<std::string>result;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            st += " ";
            ++i;
        }
        else
        {
            st += str[i];
            ++i;
        }
    }
        result.push_back(st);
  
return result;
}
