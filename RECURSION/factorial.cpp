#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return n;
    else{
        return n*fact(n-1);
    }
}
int32_t main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}