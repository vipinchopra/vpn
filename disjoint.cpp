/*Check weather elements are there are same or not in an array*/
#include<iostream>
#include<set>
using namespace std;
int disjoint(int a1[],int a2[],int n,int m)
{
    set<int>s;
for(int i=0;i<n;i++)
s.insert(a1[i]);

// now check each elemnt by traversing the second array with it
for(int i=0;i<m;i++)
if(s.find(a2[i])!=s.end())
return 0;
else
    return 1;
}
int main()
{
int a1[]={1,23,4,3,4,5};
int a2[]={6,1,72,10,8,9};
int n=sizeof(a1)/sizeof(a1[0]);
int m=sizeof(a2)/sizeof(a2[0]);
if(disjoint(a1,a2,n,m))
printf("Disjoint");
else
{
    cout<<"not disjoint"<<endl;
}

//check both have same element or not otherwise it is not there

// using appoch of hash tables we can find out it

    return 0;
}