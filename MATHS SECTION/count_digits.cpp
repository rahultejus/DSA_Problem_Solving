#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // string s=to_string(n);
    // cout<<s.length()<<endl;
    int x=floor(log10(n)+1);
    cout<<x<<endl;
    return 0;
}