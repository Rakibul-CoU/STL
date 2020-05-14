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
    int n, m, i;
    cin>>n;
    vector<int>vec;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<"Initial vector: ";
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    cout<<"After making Unique vector: ";
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}
