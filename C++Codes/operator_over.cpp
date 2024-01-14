//EROOR ERROR!!!!!!
#include<iostream>
using namespace std;
 class sample{
private:
int m;
public:
void getdata();
void oper++();
void display();
 } ;
 void sample :: getdata()
 {
    cin>>m;

 }
 void sample :: oper++()
 {
    m=m+5;

 }
 void sample :: display()
 {
    cout<<m;

 }
int main(void){
 sample op,ol;
 cout<<"Enter the first value:"<<endl;
 op.getdata();
 cout<<"Enter the second value:"<<endl;
 ol.getdata();
 cout<<"Initial value of first number:"<<endl;
 op.display();
 cout<<"Initial value of second number:"<<endl;
 ol.display();
 ++op;////this program is not working because the objects arenot icrementing its values:
 ++ol;
 ++ol;
 cout<<"Final value of first number:"<<endl;
 op.display();
 cout<<"Final value of second number:"<<endl;
 ol.display();
 
 
 
}