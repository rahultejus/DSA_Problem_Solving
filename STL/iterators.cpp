#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v={2,3,4,9,3,89};
    // vector<int> :: iterator it;
    // for(int &val :v){
    //     val++;
    // cout<<val<<endl;
    // }

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" "<<endl;
    // }
    // vector<pair<int,int>> v_p={{2,3},{6,8},{8,10},{4,43}};
    // vector<pair<int,int>>:: iterator it;
    // for( it=v_p.begin();it!=v_p.end();++it)
    // {
    //     cout<<(it->first)<<" "<<(it->second)<<endl;
    // }
    //  for( it=v_p.begin();it!=v_p.end();++it)
    // {
    //     cout<<((*it).first)<<" "<<((*it).second)<<endl;
    // }
    vector<pair<int,int>> v_p={{2,3},{6,8},{8,10},{4,43}};
    vector<pair<int,int>>:: iterator it;
    for(/*pair<int,int>*/ auto val:v_p){
    cout<<val.first<<" "<<val.second<<endl;
    }
    auto a=2.24;
    cout<<a;
  return 0;
}