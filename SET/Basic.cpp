#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
   set<int>s;
   s.insert(10);
   s.insert(90);
   s.insert(2);
   s.insert(8);
//    for(int x: s)
//    cout << x << endl;
// set<int>:: iterator it;
// for( auto it = s.begin(); it != s.end();it++)
// {
//     cout<<(*it) << endl;
// }
auto it=s.find(786);
if(it==s.end())
cout<<"Not found"<<endl;
else
cout<<"Found"<<endl;
while(it!=s.end())
cout<<*it << endl;
    return 0;
}