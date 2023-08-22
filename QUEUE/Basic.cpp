#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
  queue<int> q;
  q.push(1);
  q.push(4);
  q.push(48);
  q.push(9);
  // cout<<q.front()<<endl;
  // cout<<q.back()<<endl;
  // cout<<q.size()<<endl;
while(q.empty()==false){
cout<<q.front()<<" "<<q.back()<<endl;
q.pop();
}
  // string res=q.empty()==1? "ture" : "false";
  // cout<<res<<endl;
    return 0;
}