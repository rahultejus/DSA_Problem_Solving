#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;
int fib(int n,vector<int>&dp)
{ 
  // by using this meathod the time complexity is O(n) and TC is O(n)
    
    if(n==0 || n==1)
    return n;
    if(dp[n]!=-1)
    return dp[n];
    return(dp[n]=fib(n-1,dp)+fib(n-2,dp));
}
int main ()
{
  int num;
  cout<<"Enter the Number"<<endl;
  cin>>num;
  //  vector<int> dp(num+1,-1);
  // cout<<fib(num,dp)<<"\n";
  int curr[num];
  int prev=1,prev2=0;
  // BY using this meathod the spce complexity is O(1)and TC is O(n);
  for(int i=2;i<=num;i++)
  {
    curr[i]=prev+prev2;
    prev2=prev;
    prev=curr[i];
  }
  cout<<prev<<endl;
  return 0;
}