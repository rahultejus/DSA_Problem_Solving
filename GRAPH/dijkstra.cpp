#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int graph[9][9] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
vector<int> applyDijkstra(int v , int src)
{
vector<int>dis( v , INT_MAX);
vector<bool> finalised( v , false);
dis[src] = 0;
for(int count = 0 ; count < v-1 ; count++)
{
int u = -1;
for(int i = 0 ; i < v ; i++){
if( !finalised[i] & ( u==-1 || (dis[i]< dis[u])))
u = i;
}
finalised[u] = true;
for( int i =0 ; i< v ; i++)
{
if(!finalised[i] &&(graph[u][i]!= 0))
{
dis[i] = min(dis[i],(graph[u][i]+dis[u]));
}
}
}
return dis;
}
int main(){
int v = 9;
vector<int>dis = applyDijkstra( 9 , 0);
for(int i = 0 ; i< v ;i++)
{
cout<< dis[i] <<"\t";
}
return 0;
}