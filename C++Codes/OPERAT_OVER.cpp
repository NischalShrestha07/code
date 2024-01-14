#include<iostream>
using namespace std;
 class demo {
int m;
public:
demo();
demo(int);
demo oper(demo);
void display();

 } ;
 demo :: demo(){
    m=0;

 }
 demo=demo(int n)
 {
    m=n;
 }
demo demo :: oper(demo p){
    demo p;
    p.m=m+p.m;
    return p;

}
void demo :: display()
{
    cout<<"m="<<m<<endl;

}

int main(void){
demo p2,p3;
demo op;
op=p2+p3;
p2.display();
p3.display();
op.display(); 
}