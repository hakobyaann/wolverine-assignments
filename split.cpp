#include <iostream>
#include <vector>

std::vector<std::string> split(const std::string&, const std::string&);

int main()
{
    std::string str = "He,l:l,o, wo:rl,d";
    std::string st = ":,";
    std::vector<std::string> result = split(str, st);
    for (int i = 0; i < result.size(); ++i)
    {
        std::cout << result[i] << std::endl;    
    }
return 0;
}

std::vector<std::string> split(const std::string& str, const std::string& c)
{
           std::vector<std::string> result;
           std::string token = "";
           int i = 0;
           bool flag = false;
           while (i <= str.size())
           {
               if (c.find(str[i]) != -1)
               {
                    ++i;
                    flag = true;
               }
               if (flag)
               {
                    result.push_back(token);
                    token = "";
                    flag = false;
               }
               token += str[i];
               ++i;
           }
 result.push_back(token); 
return result;
}
