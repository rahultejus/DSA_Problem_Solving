#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)
//Time Complexity O(log(n));

int RBs(int arr[],int low,int high,int x)
{ 
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
       return RBs( arr, low, mid-1,x);
        else
       return RBs(arr,mid+1, high, x);
    }
    else
    return -1;
    return mid;
}
using namespace std;

int main ()
{
    int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int low=0,high=n-1;
  cout<<RBs(arr,low,high,5)<<endl;
  return 0;
}