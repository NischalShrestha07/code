//This doesn't works its shitttttttttt.

#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class first
{

    virtual void getdata();
    virtual void display();
};
class second : public first
{
    char str1[10], str2[20];

public:
    void getdata();
    void display();
};
void first ::getdata()
{
}
void first ::display()
{
}
void second ::getdata()
{
    std::cout << "Enter the first string:" << std::endl;
    //cin >> str1;
    gets(str1);

    std::cout << "Enter the second string" << std::endl;
    //cin >> str2;
    gets(str2);
}
void second ::display()
{
    strcat(str1, str2);
    cout << "The result of concating the given strings is:" << str1;
}
int main(void)
{
    class first *ptr;
    class second op;
    ptr = &op;
    ptr->getdata();
    ptr->display();
}