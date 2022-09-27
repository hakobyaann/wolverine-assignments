#include <iostream>
#include <vector>

std::vector<std::string> ltrim(const std::string&);

int main()
{
    std::string str = "    hello";
    std::vector<std::string>result = ltrim(str);
    for (auto i : result)
    {
        std::cout << i;
    }   
    
 return 0;    
}

std::vector<std::string> ltrim(const std::string& vec)
{
    std::string st = "";
    int i = 0;
    std::vector<std::string> result;
    while (vec[i] != '\0')
    {
        if (vec[i] == ' ')
        {
            ++i;
        }
        else
        {
            st += vec[i];
            ++i;
        }
    }
    result.push_back(st);
   
 return result;
}
