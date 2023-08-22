#include<bits/stdc++.h>
using namespace std;

int Min_Diff(int arr[],int n)
{
    int ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        ans=min(ans,abs(arr[i]-arr[j]));
    }
    return ans;
}
int32_t main()
{
   int n;
   int arr[]={1,9,3,4,6,7};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<Min_Diff(arr,n);
    return 0;
}