#include<iostream>
using namespace std;
 class base{
public:
virtual void display();

 } ;
class derived :public base{
public:
void display();

};
void base:: display(){
    cout<<"VIRTUAL FUNCTION OF BASE CLASS.";

}
void derived::display()
{
    cout<<"ORDINARY FUNCTIION OF BASE CLASS ";

}
int main(void){
 class base *ptr;
 class derived obj;
 ptr=&obj;
 ptr->display();
}