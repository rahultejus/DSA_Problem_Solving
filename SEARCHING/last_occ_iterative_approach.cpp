#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;
 int last_occ(int arr[],int low,int high,int x)
 {
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]<x)
         low=mid+1;
         else if(arr[mid]>x)
         high=mid-1;
         else{
            if(arr[mid]==0 || arr[mid+1]!=arr[mid])
            return mid;
            else
            low=mid+1;
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
  cout<<last_occ(arr,0,n-1,4)<<endl;
  
  return 0;
}