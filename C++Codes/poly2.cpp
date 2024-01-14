#include<iostream>
using namespace std;
 class per_data{
char name[30];
int age;
char sex;
public:
virtual void getdata();
virtual void display();
 } ;
//dep_data=== department data.
//perr_data== personal data.
 class dept_data: public per_data{
int empno;
char name[30];
char dept[20];
int salary;
char sex;
public:
void getdata();
void display();
 };
 void per_data :: getdata()
 {
    cout<<"Enter the personal information:"<<endl;
    cout << "Enter name:" <<endl;
    cin>>name;
    cout<<"Enter age:"<<endl;
    cin>>age;
    cout<<"Enter sex:"<<endl;
    cin>>sex;

 }
 void per_data :: display()
 {
    cout << "Enter name:" <<name<<endl;
    //cin>>name;
    cout<<"Enter age:"<<age<<endl;
   // cin>>age;
    cout<<"Enter sex:"<<sex<<endl;
 //   cin>>sex;

 }
 
 void dept_data :: getdata()
 {
    cout<<"Enter the department information:"<<endl;
    cout << "Enter employee number:" <<endl;
    cin>>empno;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter name of departmenet:"<<endl;
    cin>>dept;
    cout<<"Enter name of salary:"<<endl;
    cin>>salary;
    cout<<"Enter name of sex:"<<endl;
    cin>>sex;
 }
 void dept_data :: display()
 {
cout<<"The entered department informnation:"<<endl;
std::cout << "**********************************" << std::endl;
cout<<"Employee Number:"<<empno<<endl;
cout<<"Enter name:"<<name<<endl;
cout<<"Name of the Department:"<<dept<<endl;
cout<<"Employee Salary:"<<salary<<endl;
cout<<"Employee Gender:"<<sex<<endl;

 }
 
int main(void){
 
 class per_data *ptr;
 class dept_data op;
 ptr=&op;
 ptr->getdata();
 cout <<endl;
 
 cout <<endl;
 ptr->display();
}