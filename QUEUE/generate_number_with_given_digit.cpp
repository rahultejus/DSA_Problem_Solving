#include<bits/stdc++.h>
using namespace std;

void print(int n){
    queue<string> q;
    q.push("5");
    q.push("6");
    for(int count=0;count<n;count++){
        string curr=q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }
}
int32_t main()
{
    int n;
    cin>>n;
    print( n);
    return 0;
}