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
    string str="somewhere, something incredible is waiting to be known.";
    cout<<"lexicographically small: "<<min(str.substr(0,9),str.substr(11,9))<<endl;
    cout<<"lexicographically large: "<<max(str.substr(0,9),str.substr(11,9))<<endl;

    return 0;
}
