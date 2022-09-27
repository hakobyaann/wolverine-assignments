#include <iostream>
#include <vector>

std::vector<std::string> toUpperCases(std::string&);

int main()
{
    std::string str = "";
    std::cin >> str;
    std::vector<std::string> result = toUpperCases(str);
    for (auto i : result)
    {
        std::cout << i;
    }

return 0;
}

std::vector<std::string> toUpperCases(std::string& str)
{
    std::vector<std::string>result;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' || str[i] <= 'Z')
        {
            str[i] -= 32;
        }
        ++i;
    }

    result.push_back(str);

return result;
}
