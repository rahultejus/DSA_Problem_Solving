#include<bits/stdc++.h>
using namespace std;
 void print_vec(vector<pair<int,int>> v)
 {
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i].first<<" "<<v[i].second<<endl;
    }
 }
 int main()
 {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    print_vec(v);
 }