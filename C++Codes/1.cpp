#include<iostream>
using namespace std;
 class personal{
char name[20];
int age;
char sex;
public:
virtual void  getdata();
virtual void display();

 };
 class academic:public personal{
char name[20];
char trade[20];
int rollno;
public:
void getdata();
void display();


 };
 void personal :: getdata()
 {
    cout<<"Enter the data:"<<endl;
    cout<<"Name:";
    cin>>name;
    cout<<"Age:";
    cin>>age;
    cout<<"Sex:";
    cin>>sex;

 }
 void personal::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Sex: "<<sex<<endl;

 }
 void academic ::getdata(){
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter Trade:"<<endl;
    cin>>trade;
    cout<<"Enter rollno:"<<ensl;
    cin>>rollno;
 }
 void academic :: display()
 {
cout<<"Name: "<<name<<endl;
cout<<"Trade:"<<trade<<endl;
cout<<"Rollno:"<<rollno<<endl;


 }
int main(void){
class personal *ptr;
class academic o1;
ptr                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
}