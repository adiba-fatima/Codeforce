#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, minpassanger;
    cin>>n;
vector <int> a(n+1),b(n+1);
vector<int> total(n+1,0);
for(int i=1; i<=n; i++)
{
cin>>a[i] >> b[i];
}
for(int i=1; i<=n; i++)
{
total[i]=total[i-1]-a[i]+b[i];
minpassanger = *max_element(total.begin(), total.end());}
cout<< minpassanger;
}