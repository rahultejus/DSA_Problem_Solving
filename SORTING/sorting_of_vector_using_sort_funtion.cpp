#include<bits/stdc++.h>
using namespace std;

int32_t main()
{ 
    vector<int> v={2,4,8,7,6,90,56,3};
    int n=v.size();
    sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
    cout<<v[i]<<" ";
   }
  cout<<endl;
//    int n=v.size();
    sort(v.begin(),v.end(),greater<int>());
   for(int i=0;i<n;i++)
   {
    cout<<v[i]<<" ";
   }
    return 0;
}