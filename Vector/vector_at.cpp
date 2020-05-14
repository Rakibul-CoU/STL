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
    ll n, m, i, j, k, l;
    vector<ll>vec;
    cin>>n;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        vec.push_back(x);
    }
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vec.at(5)=10;
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}
