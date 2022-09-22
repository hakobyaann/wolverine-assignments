#include <iostream>

//prints the sum of the array's elements 

int main()
{
    const int size = 3;
    int arr[size] = {1, 2, 3};
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    std::cout << sum << std::endl;
    return 0;
}


//assembly language

main:
    push rbp
    push rbp, rsp
    mov DWORD PTR [rbp - 12], 3
    mov DWORD PTR [rbp - 4], 0
    mov DWORD PTR [rbp - 24], 4
    mov DWORD PTR [rbp - 20], 5
    mov DWORD PTR [rbp - 16], 6
    mov DWORD PTR [rbp - 8], 0
    jmp .L2
.L3
    mov rax, DWORD PTR [rbp - 8]
    add DWORD PTR [rbp - 24 + rax * 4]
    add DWORD PTR [rbp - 4], rax
    add DWORD PTR [rbp - 8], 1
.L2
    cmp DWORD PTR[rbp - 8], 2
    jle .L3
    mov eax, 0
    pop rbp
    ret
