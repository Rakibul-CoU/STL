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
    stack<int>s;
    int n, m, i, j, k, l;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    cout<<s.size()<<endl;

    cout<<"Top element: ";
    cout<<s.top()<<endl;

    s.pop();
    cout<<"After pop top element: ";
    cout<<s.top()<<endl;
    return 0;
}
