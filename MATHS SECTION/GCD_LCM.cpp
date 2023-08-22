#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;
 int gcd(int a,int b)
 {
  if(b==0)
  {
    return a;
  }
  else{
    return gcd(b,a%b);
  }
 }
int main ()
{
  int a,b;
  cin>>a>>b;
  int g=gcd(a,b);
  int lcm=(a*b)/g;
  cout<<"gcd is"<<" "<<g<<"\n";
  cout<<"lcm is"<<" "<<lcm<<"\n";
  return 0;
}