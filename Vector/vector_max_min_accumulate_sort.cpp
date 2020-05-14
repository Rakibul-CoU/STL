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

    cout<<"Sum of all element: ";
    cout<<accumulate(vec.begin(), vec.end(), 0)<<endl;

    cout<<"Min element: ";
    cout<<*min_element(vec.begin(),vec.end())<<endl;

    cout<<"Max element: ";
    cout<<*max_element(vec.begin(),vec.end())<<endl;

    sort(vec.begin(),vec.end());
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}
