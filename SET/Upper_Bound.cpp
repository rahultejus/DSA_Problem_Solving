#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
   set<int>s;
   s.insert(10);
   s.insert(90);
   s.insert(2);
   s.insert(8);
//    auto it = s.find(10);
//    s.erase(it,s.end());
//    for(auto x:s)
//    cout<<x<<endl;
auto it=s.upper_bound(92);
// auto it=s.lower_bound(10);
if(it!=s.end())
cout<<*it<<endl;
else
cout<<"Given Element is greater than the largest ";
return 0;
}