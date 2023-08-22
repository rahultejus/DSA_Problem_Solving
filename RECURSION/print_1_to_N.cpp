
// Printing numbers from 1 to n  using backtracking.
#include<bits/stdc++.h>
using namespace std;
int num=0;
void print(int num,int n){
    if(num<1)
        return;
    else{
    print(num-1,n);
    cout<<num<<endl;
    }
}
int32_t main()
{
  int n;
  cin>>n;
  print(n,n);
    return 0;
}