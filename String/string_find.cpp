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
    string s1="rakibrahim karimrakibrahimkarim";
    cout<<"Find rakib from first: ";
    cout<<s1.find("karim")<<endl;

    cout<<s1.rfind("karim")<<endl;
    return 0;
}
