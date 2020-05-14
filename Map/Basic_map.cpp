#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int>x;
    x.insert(pair<int, int>(1,40));
    x.insert(pair<int, int>(2,30));
    x.insert(pair<int, int>(3,60));
    x.insert(pair<int, int>(4,20));
    x.insert(pair<int, int>(5,50));
    x.insert(pair<int, int>(6,50));
    map<int, int> :: iterator it;
    cout<<"\nThe Map is: \n";
    cout<<"\tKey Element\n";
    for(it=x.begin(); it!=x.end(); ++it)
    {
        cout<<'\t' << it->first
            <<'\t' << it->second <<'\n';
    }
    cout<<endl;
    // assigning the elements from x to
    map<int, int>x2(x.begin(), x.end());

    // print all elements of the map x2
    cout << "\nThe map  after"
         << " assign from x is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (it = x2.begin(); it != x2.end(); ++it) {
        cout << '\t' << it->first
             << '\t' << it->second << '\n';
    }
    cout << endl;
    // remove all elements up to
    // element with key=3 in x2
    cout << "\nx2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    x2.erase(x2.begin(), x2.find(3));
    for (it = x2.begin(); it != x2.end(); ++it) {
        cout << '\t' << it->first
             << '\t' << it->second << '\n';
    }
    // remove all elements with key = 4
    int num;
    num = x2.erase(4);
    cout << "\nx2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (it = x2.begin(); it != x2.end(); ++it) {
        cout << '\t' << it->first
             << '\t' << it->second << '\n';
    }

    cout << endl;
    return 0;
}
