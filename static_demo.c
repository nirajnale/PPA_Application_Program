#include<stdio.h>

void demo()
{
    static int No = 10;
    No++;

    printf("%d\n",No);
}
int main()
{
    Demo();
    Demo();
    Demo();

    return 0;
}