#include <iostream>
using namespace std;
class base
{
    int x, y;

public:
    void getdata();
    void display();
};
class derived : public base
{

    char a, b;

public:
    void getdata();
    void display();
};
void base::getdata()
{
    cout << "Enter two integers:";
    cin >> x >> y;

}
void base :: display()
{
    cout<<"The entered integers are:"<<endl;
    cout<<x<<endl<<y;

}
void derived:: getdata()

{
    cout<<"Enter two charecters:"<<endl;
    cin>>a>>b;
}
void derived::display()
{
    cout<<"The entered charecters are:"<<endl;
    cout<<a<<endl<<b;

}

int main(void)
{
    class base o1;
    class derived o2;
    class base *ptr;
    ptr=&o1;
    ptr=&o2;
    ptr->getdata();
    ptr->display();
}