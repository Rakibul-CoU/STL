#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int>x;
    x.insert({ 2, 30 });
    x.insert({ 1, 40 });
    x.insert({ 3, 60 });
    x.insert({ 4, 20 });
    x.insert({ 5, 50 });
    cout<<"Key\tElement\n";
    for(auto it=x.begin(); it!=x.end(); it++)
    {
        cout<<it->first<<'\t'<<it->second<<endl;
    }
    return 0;
}
