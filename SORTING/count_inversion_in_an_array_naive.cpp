#include<bits/stdc++.h>
using namespace std;


int inversion_count(int arr[],int n)
{
    int count=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(arr[i]>arr[j])
        count++;
    }
    return count;
}

int32_t main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<inversion_count(arr,n);
    return 0;
}