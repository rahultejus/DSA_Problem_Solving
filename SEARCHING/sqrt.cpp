#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;
int sqrt(int n)
{
    int low=1,high=n,ans=-1;
    while(low<=high){
    int mid=(low+high)/2;
        
   int msq=mid*mid;
   if(msq>n)
   high=mid-1;
   else if(msq==n)
   return mid;
   else{
   low=mid+1;
   ans=mid;
   }}
   return ans;
    
}
int main ()
{
   int n;
   cin>>n;
//    int m=sqrt(n);
//    int i=1;
//    while (i*i<=n)
//    {
//       i++;
//    }
   
// cout<<(i-1)<<endl; 
cout<<sqrt(n)<<endl; 
  return 0;
}