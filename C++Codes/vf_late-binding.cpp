//program to find the factorial of the number using late binding of virtual function.

#include <iostream>
using namespace std;
class first
{
    int a, b;

public:
    virtual void getdata();
    virtual void operate();
};
class second : public first
{
    int n, i;
    long int fact;

public:
    void getdata();
    void operate();
};
void first ::getdata()
{
    std::cout << "Enter the value of a and b:" << std::endl;
    cin >> a >> b;
}
void first ::operate()
{
    int c;
    c = a + b;
    cout << c << endl;
}
void second :: getdata()
{
    cout<<"Enter the number whose factorial is required:"<<endl;
    cin>>n;
}
void second :: operate(){
    fact=1;
    for ( i = 1; i <= n; i++)
    {
        /* code */
        fact=fact*i;
    }
        cout<<"The factorial of the entered number is:"<<fact<<endl;

    
    
}
int main(void)
{
    class first *ptr;
    class second op;
    ptr=&op;
    ptr->getdata();
    ptr->operate();
}