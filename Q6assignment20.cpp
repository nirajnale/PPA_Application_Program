#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    float Value = 0;
    cout<<"Enter the number :"<<"\n";
    cin>>Value;
    int *p = NULL;
    p = (int *)malloc(Value * sizeof(float));

    return 0;
}    