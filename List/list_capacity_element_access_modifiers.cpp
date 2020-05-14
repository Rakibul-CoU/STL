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
    list<int>l;
    list<int>:: iterator it;
    int n, m, i, j, k;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }
    cout<<l.size()<<endl;
    cout<<"Initial List: ";
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    cout<<"First element: ";
    cout<<l.front()<<endl;

    cout<<"Last element: ";
    cout<<l.back()<<endl;

    l.push_front(100);

    cout<<"After push element in front: ";
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    l.pop_front();
    l.pop_back();

    cout<<"After poped element from front and back: ";
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    return 0;
}
