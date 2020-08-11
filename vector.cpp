                    /*Why we are not using the push_front() function in the vector*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={3,5};
    v.emplace_back(3.2);
    v.push_back(9);
    v.insert(v.begin(),1,4);  // we  cannot use push _front so we can add using the insert function
    //v.push_front(1);   push_front() is not present in the std library becuase it is inefficient approch if push_front()
    // is used the first element is getting modified and and whole is copied a new so that front is also modified
    for(int i=0;i<v.size();i++)
    std::cout<<v[i]<<endl;
    return 0;
}