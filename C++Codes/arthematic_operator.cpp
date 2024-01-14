///NOT WORKING ....

#include <iostream>
using namespace std;
class base
{
    int x,y;

public:
    virtual void display();
    virtual void getdata();
    virtual void operate();
};
class derived : public base
{
    int x,y;

public:
    void getdata();
    void operate();
    void display();
};
void base ::getdata()
{
    cout << "Enter the integers:" << endl;
    cin >> x >> y;
}
int base :: operate()
{
    return (x+y);

}
void base :: display()
{
cout<<"The sum of two numbers are:"<<operate();

}
void derived :: getdata(){
    cout<<"Enter any two integers:";
    cin>>a>>b;

}
int derived :: display()
{
    cout<<"The multiplication of the numbers gives:"<<operate();

}
int main(void)
{
    class base *ptr;
    class derived o;
    ptr =&o;
    ptr->getdata();
    ptr->operate();
    ptr->display();
    
}
// void solve::getdata()
// {

//     cout << "Enter the value of  a and b:" << endl;
//     cin >> a >> b;
// }
// void solve ::display()
// {
//     cout << "The entered numbers are: " << endl;
//     cout << a << endl
//          << b;
//}
// int sum()
// {
//     solve::sum();
//     return (a + b);
// }
// void sub()
// {
//     return (a - b);
// }
// void mul()
// {
//     return (a * b);
// }
// void div()
// {
//     return (a / b);
// }
