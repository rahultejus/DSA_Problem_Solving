#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;

int main ()
{
    int n;
    cin>>n;
    int x=2;
    for(int i=2;i<n;i++)
    {
      if(n%i==0)
      {
        while(n%i==0)
        {
          cout<<i<<" ";
          n=n/i;
        }
      }
    }
    
  
  return 0;
}