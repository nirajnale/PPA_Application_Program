#include<stdio.h>

struct Demo 
{
    int i;
    float f;
    struct Demo obj;   // Not allowed
};
int main()
{
    struct Demo obj1;   // Allowed

    return 0;

}