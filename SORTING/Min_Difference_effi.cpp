#include<bits/stdc++.h>
using namespace std;

int get_Min_diff(int arr[],int n)
{
    sort(arr,arr+n);
    int a[n-1];
    int  j=0,ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        a[j]=arr[i]-arr[i-1];
        j++;
    }
    for(int i=0;i<n-1;i++)
    ans=min(ans,a[i]);
    return ans;
}

int32_t main()
{
   int n;
   int arr[]={1,8,12,5,18};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<get_Min_diff(arr,n);
    return 0;
}