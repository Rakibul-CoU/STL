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
    string s2="rahim";
    if(s1==s2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    string s4;
    s4=s1+" "+s2;
    cout<<"Concat s1 and s2: ";
    cout<<s4<<endl;
    string s5=s1+s2;
    cout<<s5<<endl;

    for(char i ='a'; i<='g'; i++)
    {
        s1+=i;
    }
    cout<<s1<<endl;

    for(int i=0; i<s1.size(); i++)
        cout<<s1[i]<<" ";
    cout<<endl;
    return 0;
}
