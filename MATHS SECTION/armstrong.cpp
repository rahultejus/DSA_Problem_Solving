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
  int c=n , b=n;
  int r;
  int sum=0,count=0;
  while(n>0)
  {
    n=n/10;
     count++;
  }
  cout<<count<<endl;
  cout<<n<<endl;
  while(c!=0)
  {
    r=c%10;
    sum+=pow(r,count);
    c=c/10;
  }
  cout<<c<<endl;
  cout<<sum<<"\n";
  if(sum==b)
  {
    cout<<"Number is An Armstrong "<<"\n";
  }
  else{
  cout<<"Number is not An Armstrong"<<endl;
  }
  return 0;
}