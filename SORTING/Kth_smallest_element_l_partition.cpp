#include<bits/stdc++.h>
using namespace std;

int l_partition(int arr[],int l,int h)
{
    int p=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<=p)
       {
        i++;
        swap(arr[i],arr[j]);
       }   
       swap(arr[i+1],arr[h]);
    }
    return (i+1);
}
int Kth_smallest_elm(int arr[],int n,int k)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int p=l_partition(arr,l,h);
        if(p==k-1)
        return p;
        else if(p>k-1)
        h=p-1;
        else
        l=p+1;
    }
    return -1;
}

int32_t main()
{
  int n;
  int arr[]={2,9,1,3,7,5,8};
  n=sizeof(arr)/sizeof(arr[0]);
  cout<<Kth_smallest_elm(arr,n,3);
    return 0;
}