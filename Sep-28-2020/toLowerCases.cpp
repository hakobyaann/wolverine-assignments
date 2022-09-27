#include <iostream>
#include <vector>

std::vector<std::string> toLowerCases(std::string&);

int main()
{
    std::string str = "";
    std::cin >> str;
    std::vector<std::string>result = toLowerCases(str);
    for (auto i : result)
    {
        std::cout << i;
    }

return 0;
}

std::vector<std::string> toLowerCases(std::string& str)
{
    std::vector<std::string>result;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' || str[i] <= 'z')
        {
           str[i] += 32;
        }
        ++i;
    }
    result.push_back(str);
return result;
}
