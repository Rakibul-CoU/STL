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
    int n, m, i, j, k, l;
    vector<int>vec;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    vector<int>:: iterator it;
    cout<<"Access with iterator: ";
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<(*it)<< " ";
    }
    cout<<endl;
    return 0;
}
