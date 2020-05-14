#include<bits/stdc++.h>
#define PI 2.0*acos(0.0)
#define ll              long long int
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define MOD             1000000007
#define mx              123456789
using namespace std;
int main()
{
    int n, m, i, j, k;
    cin>>n;
    list<int>l;
    list<int>:: iterator it;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }

    cout<<"Initial List: ";
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    l.sort();
    cout<<"After sort: ";
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    l.unique();
    cout<<"After making unique: ";
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    l.remove(100);

    cout<<"After removing 100: ";
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    return 0;
}
