#include <iostream>
#include <string>
using namespace std;
bool isbeautiful(int year)
{
    string s = to_string(year);
    for(int i=0; i<s.size();i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            if(s[i]==s[j])
            return false;
        }
    }
    return true;
}
int main()
{
    int y;
    cin>>y;
    while(true)
    {
        y++;
    if(isbeautiful(y))
    {
        cout<<y;
        break;
    }
}
}