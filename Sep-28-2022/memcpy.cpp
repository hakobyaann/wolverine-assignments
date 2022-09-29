#include <iostream>

void memcpy(void* src, void* dest, size_t count);

int main()
{
    const int size = 6;
    char source[size] = {"Hello"};
    char destination[size] = {"world"};
    size_t count = 1;
    memcpy(source, destination, count);
    std::cout << destination << std::endl;
return 0;
}

void memcpy(void* src, void* dest, size_t count)
{
    char* sptr = (char*)src;
    char* dptr = (char*)dest;
    int i = 0;
    while (count != 0)
    {
        *(dptr + i) = *(sptr + i);
        ++i;
        --count;
    }
}
