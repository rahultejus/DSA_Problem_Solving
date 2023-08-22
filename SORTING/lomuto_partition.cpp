#include<bits/stdc++.h>
using namespace std;
int l_partition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
   for(int j=l;j<=h-1;j++)
   {
    if(arr[j]<pivot)
    {
        i++;
        swap(arr[i],arr[j]);
    }
    swap(arr[i+1],arr[h]);
   }
   return (i+1);
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
  cout<<l_partition(arr,0,(n-1));
   return 0;
}
