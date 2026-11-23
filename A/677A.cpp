#include <iostream>
using namespace std;
int main()
{
    int n, h;
    int arr[n];
    int width=0;
    cin>> n;
    cin>> h;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=h)
        {
            width++;
        }
        else
        {
            width = width+2;
        }
    }
    cout<<width;
    return 0;
    
}