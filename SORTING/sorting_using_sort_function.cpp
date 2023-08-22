#include<bits/stdc++.h>
using namespace std;

void sorting(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    sorting(a,n);
    return 0;
}