#include<stdio.h>

int A = 10;

extern int B;

extern int C;

int main()
{
    printf("Value of A %d",A);

    printf("Value of B %d",B);

    printf("Value of C %d"C);

    return 0;
}

// gcc extern_demo.c extern.c Myexe