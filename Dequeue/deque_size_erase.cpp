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
    dq.push_back(5);
    dq.push_back(2);
    dq.push_back(10);
    dq.push_back(7);
    dq.push_back(4);
    for(i=0; i<dq.size(); i++)
    {
        if(dq[i]%2==0)
        {
            dq.erase(dq.begin()+i);
        }
    }
    for(i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.clear();
    cout<<dq.size()<<endl;
    return 0;
}
