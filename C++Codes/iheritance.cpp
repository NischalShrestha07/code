#include<iostream>
using namespace std;
 class first {
private:
int bookno;
char bname[50];
public:
void getdata()
{
cout<<"Enter the Book Number: "<<endl;
cin>>bookno;
cout<<"Enter the Book NAme: "<<endl;
cin>>bname;

}
void display()
{

    cout<<"Book Number: "<<bookno<<endl;
    cout<<"Book Name: "<<bname<<endl;

}

 };
 class second{
private:
char auname[50];
char publisher[50];
public:
void getdata()
{
    cout<<"Enter the Author Name:"<<endl;
    cin>>auname;
    cout<<"Enter Publisher NAme: "<<endl;
    cin>>publisher;

}
void display()
{
    cout<<"Author NAme:"<<auname<<endl;
    cout<<"Publisher NAme:"<<publisher<<endl;

}

 };
 class third : public first,public second
 {

    public:
    void getdata()
    {
        first :: getdata();
        second ::getdata();

    }
    void display()
    {
        first :: display();
        second :: display();
    }
 };
int main(void){
 class third o1;
 cout<<"Enter the information: "<<endl;
 o1.getdata();
 cout<<endl<<"The entered data is: "<<endl;
 o1.display();
}