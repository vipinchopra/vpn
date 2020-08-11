                                /*vector all functions*/
#include<vector>
#include<iostream>
using namespace std;
int main()
{
vector<int>v={1,3,23,2,3};
    for(auto i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
// this vector is used when we need to declare the 5 elements with 11 filled into it    
vector<float>f(5,11);
for(auto i=0;i<f.size();i++)
{
    cout<<f[i]<<endl;
}
f.insert(f.begin(),1,33);
cout<<"------------------------------------->"<<endl;
for(auto i=0;i<f.size();i++)
{
    cout<<f[i]<<endl;
}
cout<<"------------------------------------->"<<endl;
// now i want to in last into the vector it can be done via emblace_back() function
f.emplace_back(99);
for(auto i=0;i<f.size();i++)
{
    cout<<f[i]<<endl;
}

// we want to add data in last it can be done via push_back() function also
f.push_back(99.2);
for(auto i=0;i<f.size();i++)
{
    cout<<f[i]<<endl;
}

//diffrence between push_back() and emplaace_back() functions

return 0;
}