#include<bits/stdc++.h>
using namespace std;
int l_partition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
   for(int j=l;j<=h-1;j++)
   {
    if(arr[j]<=pivot)
    {
        i++;
        swap(arr[i],arr[j]);
    }
    swap(arr[i+1],arr[h]);
   }
   return (i+1);
}
void q_sort(int arr[],int l,int h)
{
    if(l<h){
    int p=l_partition(arr,l,h);
    q_sort(arr,l,p-1);
    q_sort(arr,p+1,h);
}
}

void print_elm(int arr[],int n)
{
   for(int i=0;i<n;i++)
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
  q_sort(arr,0,n-1);
  printf("Shorted Array is\n");
   print_elm(arr,n);
   return 0;
}
