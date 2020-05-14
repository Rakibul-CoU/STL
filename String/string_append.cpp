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
    string s1="rakib";
    for(char i='a'; i<='g'; i++)
    {
        s1+=i;
    }
    cout<<s1<<endl;

    for(int i=0; i<s1.size(); i++)
    {
        cout<<s1[i];
    }
    cout<<endl;
    return 0;
}
