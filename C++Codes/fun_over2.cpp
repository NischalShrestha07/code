#include <iostream>
using namespace std;
class demo
{
    int a, b, c;
    float d, e, f;
    double g, h, i;

public:
    void getdata();
    int sum(int, int);
    float sum(float, float);
    double sum(double, double);
    void display();
};
void demo :: getdata()
{
    cout << "Enter any two integers:";
    cin >> a >> b;
    cout << "Enter any two float numbers:";
    cin >> d >> e;
    cout << "Enter any two double numbers:";
    cin >> g >> h;
}
int demo ::sum(int a, int b)
{
    return(a + b);
}
float demo ::sum(float d, float e)
{
    return(d + e);
}
double demo ::sum(double g, double h)
{
    return (g + h);
}
void demo :: display()
{
    c = sum(a,b);
    f = sum(d , e);
    i = sum(g , h);
    cout<<endl<<"The Entered Details are  Shown below: "<<endl;
    cout << "The sum of the entered number is:" << c << endl;
    cout << "The sum of the entered floating number is:" << f << endl;
    cout << "The sum of the entered double number is:" << i << endl;
}

int main(void)
{
    class demo op;
    op.getdata();
    op.display();
}