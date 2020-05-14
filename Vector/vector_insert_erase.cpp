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
    vec.push_back(199);
    vec.push_back(34);
    vec.push_back(1325);
    vec.push_back(45);
    vec.push_back(8989);

    cout<<"Initial Vector Size: "<<vec.size()<<endl;
    cout<<"Initial Vector: ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    vec.pop_back();
    cout<<"After pop_back: ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    vec.insert(vec.begin(),34);
    cout<<"After insert 1st position: ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    vec.insert(vec.begin()+2,345);
    cout<<"After insert 3rd position: ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    vec.erase(vec.begin()+1);
    cout<<"After erase one element from 2nd position: ";
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    vec.erase(vec.begin()+2, vec.begin()+4);
    cout<<"After erase 3rd to 4th position: ";
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    vec.clear();
    cout<<"Is vector empty "<<vec.empty()<<endl;

    return 0;
}
