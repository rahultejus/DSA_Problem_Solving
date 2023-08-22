#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
 int n,m,cnt=0;
 cin>>n>>m;
 vector<vector<int> > adj(n);
 vector<int>indeg(n,0);
 for(int i=0;i<m;i++){
     int a,b;
     cin>>a>>b;
  adj[a].push_back(b);
  indeg[b]++;
   }
   queue<int>pq;
   for(int i=0;i<n;i++){
if(indeg[i]==0)
{
    pq.push(i);
}
       }   
       while(!pq.empty()){
        cnt++;
       int x=pq.front();
          pq.pop();
    cout<<x<<endl;
    for(auto it:adj[x]){
        indeg[it]--;
        if(indeg[it]==0){
            pq.push(it);

    }
       }
       }
        return 0;
}