#include <iostream>

bool endsWith(std::string, std::string);

int main()
{
    std::string str = "Hello world";
    std::string st = "orrld";
    bool result = endsWith(str, st);
    std::cout << result << std::endl;
return 0;
} 

bool endsWith(std::string str, std::string st)
{
    int i = str.size() - 1;
    int k = st.size() - 1;
    int j = 0;
    bool result = false;
    while (st[j] != '\0')
    {
        if (str[i] == st[k])
        {
            result = true;
            --k;
            --i;
            ++j;
        }
        else
        {
            result = false;
            break;
        }
    }
return result;
}
