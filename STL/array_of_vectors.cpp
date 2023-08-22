#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int> v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int N;
    // cout<<"Enter No of vectors you want"<<endl;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++)
    {
        int n,x;
        // cout<<"Enter no of elements you want in a vector"<<endl;
        cin>>n;
        
        for(int j=0;j<n;j++)
        {
            // cout<<"ENter elements"<<endl;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    {
        print_vec(v[i]);
    }
    return 0;
}