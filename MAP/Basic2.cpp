#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    map<int32_t, int32_t>m;
    m.insert({10,200});
    m.insert({20,230});
    m.insert({30,255});
    for(auto it=m.begin(); it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
        // cout<<it->first<<" "<<it->second<<endl;
    }
    m.clear();
    cout<<m.size()<<endl;

    return 0;
}