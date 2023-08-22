#include<bits/stdc++.h>
using namespace std;
int b_search(int arr[],int low ,int high,int x)
{
    if(low>high)
      return -1;
      else
      {
        int mid=(low+high)/2;
        if(x>arr[mid])
        return b_search(arr,mid+1,high,x);
        else if(x<arr[mid])
        return b_search(arr,low,mid-1,x);
        else
        return mid;
      }
}

int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    cout<<b_search(a,0,n-1,4)<<endl;
    
    return 0;
}