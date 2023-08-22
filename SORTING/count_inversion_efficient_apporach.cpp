#include<bits/stdc++.h>
using namespace std;

int count_and_merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[i+l];
    }
      for(int i=0;i<n2;i++)
    {
        right[i]=arr[m+i+1];
    }
    int res=0, i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else{
            arr[k++]=right[j++];
            res+=(n1-i);
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
     while(j<n2)
    {
        arr[k++]=right[j++];
    }
    return res;
}
int count_inversion_eff(int a[],int l,int r)
{
   int res=0;
   if(l<r)
   {
    int m=l+(r-l)/2;
    res+=count_inversion_eff(a,l,m);
    res+=count_inversion_eff(a,m+1,r);
    res+=count_and_merge(a,l,m,r);
   }
   return res;

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
  cout<< "Total Number of inversions  " <<count_inversion_eff(arr,0,n);
    return 0;
}