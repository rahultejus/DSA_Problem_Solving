#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <math.h>
using namespace std;
int graph[5][5]= {
{INT_MAX, 2, INT_MAX, 6, INT_MAX},
{2, INT_MAX, 3, 8, 5},
{INT_MAX, 3, INT_MAX, INT_MAX, 7},
{6, 8, INT_MAX, INT_MAX, 9},
{INT_MAX, 5, 7, 9, INT_MAX}};
int applyPrims(int v)
{
int res = 0;
bool mSet[v];
int key[v];
key[0] = 0;
mSet[0] = false;
for (int i = 1; i < v; i++)
{
key[i] = INT_MAX;
mSet[i] = false;
}
for (int count = 0; count < v; count++)
{
int u = -1;
for (int i = 0; i < v; i++)
{
if (!mSet[i] && (u == -1 || key[i] < key[u]))
u = i;
}
mSet[u] = true;
res = res + key[u];
for (int i = 0; i < v; i++)
{
if ((!mSet[i]) & (graph[u][i]!=0))
key[i] = min(key[i], graph[u][i]);
}
}return res;
}
int main()
{
/* Let us create the following graph
2 3
(0)--(1)--(2)
| / \ |
6| 8/ \5 |7
| / \ |
(3)-------(4)
9 */
// Print the solution
int v = 5;
cout << applyPrims(v);
return 0;
}