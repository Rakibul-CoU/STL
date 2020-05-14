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
    priority_queue<int>pq;
    pq.push(5);
    pq.push(7);
    pq.push(8);
    cout<<pq.size()<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<pq.size()<<endl;
    pq.push(5);
    pq.push(7);
    pq.push(8);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    return 0;
}
