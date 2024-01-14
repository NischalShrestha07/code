//To calculate and display the cube of an integer,float ,double number using function overloading.
#include <iostream>
using namespace std;
class demo
{
    int a1, a2;
    float b1, b2;
    double d1, d2;

public:
    void getdata();
    int cube(int);
    float cube(float);
    double cube(double);
    void display();
};

void demo ::getdata()
{
    cout << "Enter an integer: ";
    cin >> a1;
    cout << "Enter the float no.";
    cin >> b1;
    cout << "Enter a double no.";
     cin >> d1;
}
int demo :: cube(int a1)
{
    return (a1*a1*a1);

}
float demo :: cube (float b1)
{
   return(b1*b1*b1);
}

double demo :: cube(double d1)
{
    return (d1*d1*d1);

}
void demo :: display()
{
a2=cube(a1);
b2=cube(b1);
d2=cube(d1);
cout<<"The cube of the enetered integer is a: "<<a2<<endl;
cout<<"The cube of the enetered float no is b: "<<b2<<endl;
cout<<"The cube of the enetered double no is d: "<<d2<<endl;


}
int main(void)
{
    class demo op;
    op.getdata();
    op.display();
}