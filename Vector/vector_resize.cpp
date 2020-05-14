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
    vector<int>vec;
    for(int i=1; i<=10; i++)
    {
        vec.push_back(i);
    }
    cout<<"Initial Vector: ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    vec.resize(5);
    cout<<"After resize(5): ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    vec.resize(10);
    cout<<"After resize(10): ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    vec.resize(15,10);
    cout<<"After resize(15,10): ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}
