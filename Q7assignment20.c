#include<stdio.h>
#include<stdlib.h>

struct Hello
{
    float f;
    int i;
};

int main()
{
    struct Hello arr[5];

    struct Hello *ptr = NULL;
    ptr = malloc(sizeof(struct Hello));
}