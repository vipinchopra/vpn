// new will throw exception if it is allocated any memory
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{ 
  int *ptr=NULL;
  try
  {
    ptr=new int[0xffffffff];
    *ptr=20;
    cout<<"*ptr"<<*ptr<<endl;
   // throw ptr;        
  }
  catch(...) //default exception
  {
      cout<<"new alloaction failed"<<endl;
  }
return 0;
} 