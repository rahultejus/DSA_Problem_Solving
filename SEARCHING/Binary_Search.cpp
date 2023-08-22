#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)
//Time Complexity=O(log(n));
//iterative binary Search is better than recursive binary search because there is no headache 
// of function call 
using namespace std;
int bsearch(int arr[],int n,int x)
{
    int low=0,high=n-1;
  int mid;
  while(low<=high)
  {
     mid=(low+high)/2;
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]>x)
     high=mid-1;
    else
    low=mid+1;
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
  
  cout<<bsearch(arr,n,6)<<endl;
  

  return 0;
}