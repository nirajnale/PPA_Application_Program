#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj1 = {11,90.90,51};

    struct Demo * ptr = &obj1;

    obj1.i = 11;      // . Direct member access operator
    ptr->j = 51;      // -> Indirect member access operator
    ptr->f = 90.90;


    printf("%d",ptr->i);
    printf("%d",ptr->j);
    printf("%f",ptr->f);
    
    return 0;
}


// Direct member initialisation
obj1.i = 11;
obj1.f = 90.90;
obj1.j = 51;

// Indirect member initialisation
ptr-> = 11;
ptr-> = 90.90;
ptr-> = 51;