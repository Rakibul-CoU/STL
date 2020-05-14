#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp.insert({4,30});
    mp.insert({1,40});
    mp.insert({6,60});
    pair<map<int,int>::iterator,map<int,int>::iterator>it;
    it=mp.equal_range(1);
    cout<<"The lower Bound is: "<<
    it.first->first<<" : "<<it.first->second<<endl;
    cout<<"The upper bound is: "<<
    it.second->first<<" : "<<it.second->second<<endl;
    it = mp.equal_range(10);
    cout << "The lower bound is " <<
    it.first->first << ":" << it.first->second;

    cout << "\nThe upper bound is " <<
    it.second->first << ":" << it.second->second;
    return 0;
}
