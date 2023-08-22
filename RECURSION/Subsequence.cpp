#include<bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int>&ds,int n,int arr[]){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
    }
   cout<<endl;
   return;
}
printF(ind+1,ds,n,arr);
ds.push_back(arr[ind]);
printF(ind+1,ds,n,arr);
ds.pop_back();
}
int32_t main()
{
   int arr[]={3,1,2,4};
   int n=4;
   vector<int>ds;
   printF(0,ds,n,arr);
    return 0;
}