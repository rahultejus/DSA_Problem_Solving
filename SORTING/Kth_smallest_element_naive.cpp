#include<bits/stdc++.h>
using namespace std;

int Kth_smallest_elm(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

int32_t main()
{
    int n;
  int arr[]={2,90,7,5,8,};
  n=sizeof(arr)/sizeof(arr[0]);
  cout<<Kth_smallest_elm(arr,n,3)<<endl;

    return 0;
}