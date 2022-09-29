#include <iostream>

int lastIndexOf(std::string, std::string);

int main()
{
    std::string str = "hello i said hello";
    std::string st = "hell";
    int index = lastIndexOf(str, st);
    std::cout << index << std::endl;

return 0;
}

int lastIndexOf(std::string str, std::string st)
{
    int i = str.size() - 1;
    int j = st.size() - 1;
    int k = 0;
    int index = str.size() - 1;
    while (str[k] != '\0')
    {
        if (str[i] == st[j])
        {
            if (str[i-1] != st[j-1])
            {
                break;
            }
            --index;
            ++k;
            --i;
            --j;
        }
        else
        {
            continue;
        }
    }
return index;
}
