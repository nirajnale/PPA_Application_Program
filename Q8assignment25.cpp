#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        Demo(int i = 50, int j = 60)
        {
            A = i;
            B = j;
        }
        
};


Demo operator + (Demo ob1, Demo ob2)
{
    cout<<"Inside + operator"<<"\n";
    return Demo(ob1.A+ob2.A, ob1.B+ob2.B);
}

Demo operator - (Demo ob1, Demo ob2)
{
    cout<<"Inside - operator"<<"\n";
    return Demo(ob1.A-ob2.A, ob1.B-ob2.B);
}

Demo operator * (Demo ob1, Demo ob2)
{
    cout<<"Inside * operator"<<"\n";
    return Demo(ob1.A*ob2.A, ob1.B*ob2.B);
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