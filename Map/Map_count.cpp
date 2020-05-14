#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>x;
    x.insert({2,10});
    x.insert({1,100});
    x.insert({3,40});
    x.insert({4,80});
    map<int, int> :: iterator it;
    if(x.count(1))
        cout<<"Key 1 is present."<<endl;
    else
        cout<<"Not Present"<<endl;
    if(x.count(100))
        cout<<"Present"<<endl;
    else
        cout<<"Not Present"<<endl;
    return 0;
}
