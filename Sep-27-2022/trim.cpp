#include <iostream>
#include <vector>

std::vector<std::string> trim(const std::string&);

int main()
{
    std::string str = "    hello     ";
    std::vector<std::string>result = trim(str);
    for (auto i : result)
    {
        std::cout << i;
    }

return 0;     
}

std::vector<std::string> trim(const std::string& st)
{
    std::string s = "";
    int i = 0;
    std::vector<std::string> result;
    while (st[i] != '\0')
    {
        if (st[i] == ' ')
        {
            ++i;
        }
        else
        {
            s += st[i];
            ++i;
        }
    }
        
    result.push_back(s);
    st = "";            
return result;
}
