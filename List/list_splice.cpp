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
    list<int>List1,List2;
    list<int>::iterator it;
    for(int i=0;i<10;i++)List1.push_back(rand()%100);
    for(int i=0;i<5;i++)List2.push_back(rand()%100);

    cout<<"Initial list1: ";
    for(it=List1.begin();it!=List1.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    cout<<"Initial list2: ";
    for(it=List2.begin();it!=List2.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    List1.splice(List1.end(),List2);

    cout<<"After splice: ";
    for(it=List1.begin();it!=List1.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    return 0;
}
