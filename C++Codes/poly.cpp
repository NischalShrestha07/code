#include <iostream>
#include<conio.h>
using namespace std;
class personal
{
    char name[20];
    int age;
    char sex;

public:
    void getdata();
    void display();
};
class academic : public personal{
    char name[20];
    char trade[20];
    int rollno;
    int year;

public:
    void getdata();
    void display();
};
void personal :: getdata()
{
    cout << "Enter the personal information:" << endl;
    cout << "Enter name:";
    cin >> name;
    cout << "Enter age:";
    cin >> age;
    cout << "Enter sex:";
    cin >> sex;
}
void personal::display()
{
    cout << " Name:" << name<<endl;
    cout << " Age:" << age<<endl;
    cout << " Sex:" <<sex<<endl;
}
void academic :: getdata()
{
    cout << "Enter the academic information:" << endl;
    cout << "Enter name:";
    cin >> name;
    cout << "Enter trade:";
    cin >> trade;
    cout<<"Enter rollno:";
    cin>>rollno;
    cout << "Enter year:";
    cin >> year;
}
void academic::display()
{
    cout << " The academic information:" << endl;
    cout << " name:"<<name<<endl;
    cout << "Trade:"<<trade<<endl;
    cout<<"Rollno:"<<rollno<<endl;
    cout << "Year:"<<year<<endl;
}

int main(void)
{
    class personal *ptr;
    class academic o;
    ptr=&o;
    ptr->getdata();
    ptr->display();

}