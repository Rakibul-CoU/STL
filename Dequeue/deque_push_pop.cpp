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
    deque<int>dq;
    int n, m, i, j, k, l;
    dq.push_front(5);
    dq.push_front(6);
    for(i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.pop_front();
    for(i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.push_back(9);
    dq.push_back(10);
    for(i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.pop_back();
    for(i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    return 0;
}
