#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p_arr[3];
    p_arr[0]={1,"rahul"};
    p_arr[1]={2,"animesh"};
    p_arr[2]={3,"ankur"};
    swap(p_arr[0],p_arr[2]);
    for(int i=0;i<3;i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }
    // p={2,"a"};
    // pair<int,string> p1=p;
    // p.first=4;
    // cout<<p.first<<" "<<p.second<<endl;

    return 0;
}