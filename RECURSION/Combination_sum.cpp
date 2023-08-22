#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
  void findcombinations(int ind,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds,int target)
 {
    if(ind==arr.size()){
        if(target==0){
          ans.push_back(ds);
        }
    
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findcombinations(ind,arr,ans,ds,target-arr[ind]);
        ds.pop_back();
    }
    findcombinations(ind+1,arr,ans,ds,target);
 }
 public:
 vector<vector<int>>combinationSum(vector<int>&candidate,int target){
    vector<vector<int>>ans;
    vector<int>ds;
    findcombinations(0,candidate,ans,ds,target);
    return ans;
 }
};


