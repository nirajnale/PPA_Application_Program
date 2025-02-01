#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        Demo(int i = 50, int j = 50)
        {
            A = i;
            B = j;
        }
        friend Demo operator + (Demo op1, Demo op2);
        friend Demo operator - (Demo op1, Demo op2);
        friend Demo operator * (Demo op1, Demo op2);
};


Demo operator + (Demo op1, Demo op2)
{
    cout<<"Inside + operator"<<"\n";
    return Demo(op1.A+op2.A, op1.B+op2.B);
}

Demo operator - (Demo op1, Demo op2)
{
    cout<<"Inside - operator"<<"\n";
    return Demo(op1.A-op2.A, op1.B-op2.B);
}

Demo operator * (Demo op1, Demo op2)
{
    cout<<"Inside * operator"<<"\n";
    return Demo(op1.A*op2.A, op1.B*op2.B);
}

Demo operator - (Demo ob1)
{
    cout<<"Inside - operator"<<"\n";
    return Demo(-ob1.A);
}

int main()
{
    Demo obj1(100,200);
    Demo obj2(300,400);
    Demo obj(0,0);

    obj = obj1 - obj2;  // +(obj1,obj2)

    cout<<obj.A<<"\n";
    cout<<obj.B<<"\n";

    return 0;
}