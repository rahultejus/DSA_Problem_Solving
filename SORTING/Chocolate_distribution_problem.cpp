#include<bits/stdc++.h>
using namespace std;

int chocolate_distribution(int arr[],int n,int m)
{
    if(m>n)
    return -1;
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=1;(m+i-1)<n;i++)
    {
        res=min(res,arr[i+m-1]-arr[i]);
    }
    return res;
}


int32_t main()
{
   int n;
   int arr[]={7,3,2,4,9,12,56};
   n=sizeof(arr)/sizeof(arr[0]);
   int m=3;
  cout<<chocolate_distribution(arr,n,m);
    return 0;
}