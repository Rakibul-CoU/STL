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
    string s="rakibrahimkarim";
    int i, j, k, l;
    for(i=0; i<s.size()-3; i++)
    {
        int ss=i;
        string s1=s.substr(ss,3);
        cout<<s1<<endl;
    }
    return 0;
}
