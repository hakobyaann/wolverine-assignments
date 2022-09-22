#include <iostream>
//prints the max value

int main()
{
    int x = 5;
    int y = 7;
    if (x > y)
    {
        std::cout << x << std::endl;
    }
    else
    {
        std::cout << y << std::endl;
    }
    return 0;
}


//assembly language 

main:
    push rbp
    mov rbp, rsp
    mov DWORD PTR [rbp - 4], 5
    mov DWORD PTR [rbp - 8], 7
    mov DWORD PTR [rbp - 12], 0
    mov eax, DWORD PTR [rbp - 4]
    cmp eax, DWORD PTR [rbp - 8]
    jle .L2
    mov eax, DWORD PTR [rbp - 4]
    mov DWORD PTR [rbp - 12], eax
    print eax
    jmp .L3
.L2
    mov eax, DWORD PTR [rbp - 8]
    mov DWORD PTR [rbp - 12], eax
    print eax
.L3
    mov eax, 0
    pop rbp
    ret
    
     
