#include <iostream>

void memset(void*,char val, size_t count);

int main()
{
    const int size = 10;
    char arr[size] = {};
    size_t count = 5;
    char letter = 'a';
    memset(arr, letter, count);
    std::cout << arr;

return 0;
}

void memset(void* p, char val, size_t count)
{
    char* arr = (char*)p;
    int i = 0;
    while (count != 0)
    {
       *(arr + i) = val;
        ++i;
        --count;
    }
}
