#include<stdio.h>

struct Demo
{
    int i;
    int j;
    int *ip;
    float *fp;
};

int main()
{
    struct Demo obj;
    int no = 90;
    float f = 90.67;

    obj1.i = 11;
    obj1.j = 21;
    obj1.ip = &no;
    obj.fp = &f;

    printf("%d\n",obj.i);      // 11
    printf("%d\n",obj.j);      // 21
    printf("%d\n",*(obj.ip));  // 90
    printf("%f\n",*(obj.fp));  // 90.67
    
    return 0;
}