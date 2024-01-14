#include <iostream>
using namespace std;
class demo
{
    int a1, a2, ah;
    float b1, b2, bh;
    double d1, d2, dh;

public:
    void getdata();
    int high(int, int);
    float high(float, float);
    double high(double, double);
    void display();
};
void demo ::getdata()
{
    cout << "Enter two integers:";
    cin >> a1 >> a2;
    cout << "enter two float no:";
    cin >> b1 >> b2;
    cout << "enter two float no:";
    cin >> d1 >> d2;
}
int demo ::high(int a1, int a2)
{
    if (a1 > a2)
        return a1;
    else
        return a2;
}
double demo ::high(double d1, double d2)
{
    if (d1 > d2)
        return d1;
    else
        return d2;

}
void demo:: display(){
    ah=high(a1,a2);
    bh=high(b1,b2);
    cout<<"The biggest of entered integer is"<<ah<<endl;
    cout<<"The biggest of entered flaot is"<<bh<<endl;
    cout<<"The biggest of entered double is"<<dh<<endl;

}
int main(void)
{
    class demo obj;
    obj.getdata();
    obj.display();
}