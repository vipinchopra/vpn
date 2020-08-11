/*Can we declare a class inside afunction and what is local classes*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//class declared inside the class so local class
void fun()
{
    //int x;  // we acanot access the non static members in local classes
    static int x;  // by default value is zero
class A
{
public:
void display()
{
    cout<<"In class A"<<endl;
    cout<<x<<endl;
}
};
A t;
t.display();

}

int main()
{
    fun();
    return 0;
}
