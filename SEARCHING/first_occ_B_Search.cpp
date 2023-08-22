#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;
int first_occ(int arr[],int low,int high,int x)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]<x)
        return first_occ(arr,mid+1,high,x);
        else if(arr[mid]>x)
        return first_occ(arr,low,mid-1,x);
        else{
            if(arr[mid]==0 || arr[mid]!=arr[mid-1])
            return mid;
            else
            return first_occ(arr,low,mid-1,x);
        }
    }
    return -1;
}
int main ()
{
int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<first_occ(arr,0,n-1,5)<<endl;
  return 0;
}