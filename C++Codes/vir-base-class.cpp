// THE CODE IS NOT WORKING...

#include <iostream>
using namespace std;
class base
{
protected:
    char a[10];

public:
    void input();
    void output();
};
class derive1 : public virtual base
{
protected:
    float c, d;

public:
    void input();
    void output();
};
class derive2 : public virtual base
{
protected:
    int e, f;

public:
    void input();
    void output();
};
class derive3 : public virtual base
{

public:
    void input();
    void output();
};
void base ::input()
{
    cout << "Enter the value of a:" << endl;
    cin >> a;
}
void base ::output()
{
    cout << "Entered value of a is:" << a << endl;
}

void derive1 ::input()
{
    base ::input();

    cout << "Enter the value of c and d:" << endl;
    cin >> c  >> d;
}
void derive1 :: output()
{
    base ::output();

    cout << "Entered value of c and d is:"<<endl<<c <<endl<<d<< endl;
    // cin >> c >> endl >> d;
}
void derive2 :: input()
{
    base :: input();

    cout<<"Enter the value of e and f:"<<endl;
    cin>>e>>f;

}
void derive2 :: output()
{
    base ::output();
    cout<<"The value of e is:"<<e<<endl;
    cout<<"The value of f is:"<<f<<endl;

}
void derive3 ::input()
{
    derive1 :: input();
    derive2 :: input();// dont know why the error is being seen.
}
void derive3 :: output()
{
    derive1::output();
    derive2::output();
}


int main(void)
{
    class derive3 op;
    op.input();
    op.output();
}