#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
string s, t;
cin>>s;
cin>>t;
reverse(s.begin(),s.end());
if(s==t)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}