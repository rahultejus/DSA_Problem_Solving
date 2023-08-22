#include<bits/stdc++.h>
using namespace std;
int lower_Bound(int arr[],int target,int n){
    int low=0,high=n-1,ans=n;
    while(low<=high){
      int mid=(low+high)/2;
      if(arr[mid]>=target){
        ans=mid;
        high=mid-1;
      }
      else{
        low=mid+1;
      }
    }
    return ans;
}
int main(){
  int n=6;
    vector<int> vec={0,1,2,3,4,5};
    vector<int>::iterator low,up;
   low=lower_bound(vec.begin(),vec.end(),4);
  up=upper_bound(vec.begin(),vec.end(),4);
    cout<<"Lower Bound will be "<<low-vec.begin()<<endl;
    cout<<"Upper Bound will be "<<up-vec.begin()<<endl;

}