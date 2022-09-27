#include <iostream>
#include <vector>

std::vector<std::string> rtrim(std::string);

int main()
{
    std::string str = "Hello ";
    std::vector<std::string>result = rtrim(str);
    for (auto i : result)
    {
        std::cout << i;
    }
    return 0;
}

std::vector<std::string> rtrim(std::string vec)
{    
    std::vector<std::string>result;
    int i = 0;
    std::string st = "";
    while (vec[i] != '\0')
    {
        if (vec[i] == ' ')
        {
            break;
        }    
        st += vec[i];
        ++i;
    }
    result.push_back(st);
    return result;    
}
