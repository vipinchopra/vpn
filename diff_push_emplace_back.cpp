                /* Diffrence between emplacce_back() and push_back() function*/
#include<iostream> 
#include<vector>
using namespace std;
int main()
{
vector<pair<int,char>>v; // vector priority queue
//using push_back() function to enter the data
//v.push_back(12,'a');
// we can use make pair in push_back() function
v.push_back(make_pair(24,'b'));
//using emplace_back() function to enter the data
v.emplace_back(23,'c');
for(auto i=0;i<v.size();i++)
{   
    cout<<v[i].first<<" "<<v[i].second<<endl;
}
    return 0;

//try out the elements using the emplace_back and push_back() functions
vector<vector<int>>vv;
vv.emplace_back(100000);
// vv.push_back(100000); so we cannot use it here this
}
