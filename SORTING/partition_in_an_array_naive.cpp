#include<bits/stdc++.h>
using namespace std;
 

void partition(int arr[],int l,int h,int p)
{
    int a[h-l+1],k=0;
    for(int i=l;i<=h;i++)
    {
     
     if(arr[i]<=arr[p]){
        a[k]=arr[i];
         k++;
     }
    }
    for(int i=l;i<=h;i++)
    {
     if(arr[i]>arr[p]){
     a[k]=arr[i];
     k++;
     }}
     for(int i=0;i<=h;i++)
     {
        arr[i]=a[i];
     }
    for(int i=0;i<=h;i++)
     {
        cout<<arr[i]<<" ";
     }
    
   
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
 partition(arr,0,(n-1),4);
  
    return 0;
}