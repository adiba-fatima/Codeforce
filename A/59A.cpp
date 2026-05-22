#include <iostream>
#include <cctype>
using namespace std;
int main()
{
string s;
cin>>s;
int uppercount=0, lowercount=0;
for(char c:s)
{
    if(isupper(c))
   { uppercount++;
   }
    else
    {lowercount++;
    }
}
if(uppercount>lowercount)
{
    for(char &c:s)
    {
        c=toupper(c);
    }
}
else
{
    for(char &c:s)
    {
        c=tolower(c);
    }
}
cout<<s<<endl;
return 0;
}