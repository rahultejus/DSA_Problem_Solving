#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i,n) for (int i=0; i<n; i++)
#define rep1(i,n) for (int i=1; i<n; i++)
#define repa(i,a,n) for (int i=a; i<n; i++)

using namespace std;

int main ()
{
  stack<int>s;
  s.push(2);
  s.push(4);
  s.push(6);
  s.push(28);
  s.push(29);
//   cout<<s.peak()<<endl;
  cout<<s.size()<<endl;
  s.pop();
  cout<<s.size()<<endl;
  cout<<s.top()<<endl;
//   cout<<s.peek()<<endl;
  return 0;
}