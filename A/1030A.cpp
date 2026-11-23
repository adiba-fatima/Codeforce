#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n;i++)
    {
        if(a[i]==1)
        {
            count = count+1;
        }
    }
     if(count>=1)
            {
                cout<<"HARD";
            }
        else 
        cout<<"Easy";
}