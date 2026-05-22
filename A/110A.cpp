#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector <char> a;
    for(char x:s)
    {
        if(x=='4' || x=='7')
        {
            a.push_back(x - '0');
        }
    }
    if(a.size()==4 || a.size()==7)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}