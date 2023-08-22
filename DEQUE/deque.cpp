#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    deque<int32_t> dq={10,12,30,293,302};
    dq.push_back(1);
    dq.push_back(29);
    dq.push_front(27);
    // cout<<dq.size()<<endl;
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;
    // cout<<endl;
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;
    auto it=dq.begin();
    it++;
    dq.insert(it,11);
    for(auto x:dq) 
    cout<<x<<" ";
    return 0;
}