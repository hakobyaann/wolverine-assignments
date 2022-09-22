#include <iostream>

//determines the arithmetic mean

int main()
{
    int x = 8;
    int y = 9; 
    int z = 10;
    int result = 0;
    result = (x + y + z)/3;
}

//assembly language

main:
    push rbp
    mov rbp, rsp
    mov DWORD PTR [rbp - 4], 8
    mov DWORD PTR [rbp - 8], 9
    mov DWORD PTR [rbp - 12], 10
    mov DWORD PTR [rbp - 16], 0
    mov edx, DWORD PTR [rbp - 8]
    mov eax, DWORD PTR [rbp - 4]
    add eax, edx
    mov edx, DWORD PTR [rbp - 12]
    add eax, edx
    mov edx, 3
    div eax, edx
    print eax
    mov eax, 0
    pop rbp
    ret

