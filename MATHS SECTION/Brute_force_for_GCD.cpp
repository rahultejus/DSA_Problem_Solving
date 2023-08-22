#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;

int main ()
{
   int m=4,n=6;
   int gcd;
   for(int i=1;i<min(m,n);i++)
   {
    if(m%i==0 && n%i==0)
    gcd=i;
   }
   cout<<"GCD of"<<" "<<m<<" "<<"and"<<" "<<n<<" "<<"is"<<" "<<gcd<<"\n";
  return 0;
}