#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    //this is bottom down approch
    int num,den;

    cout<<"enter the numerator"<<endl;
    cin>>num;
    cout<<"enter the deenominator"<<endl;
label:cin>>den;
    try
    {
        int res;
        if(den==0)
        throw den;
        res=num/den;
        cout<<res<<endl;
    }
    catch(int a)
    {
        cout<<"floating point exception"<<endl;
        cout<<"enter the denomintaor again"<<endl;
        goto label;
    }
}
