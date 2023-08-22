#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(2);
}
int main()
{
    vector<int> v(3,5);
    vector<int> &v2=v;
    // v.pop_back();
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //    print_vec(v);
    //     v.push_back(x);
    //     }
    v2.push_back(9);
    print_vec(v);
    print_vec(v);
    print_vec(v2);
    return 0;
    
}