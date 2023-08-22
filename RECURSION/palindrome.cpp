#include<bits/stdc++.h>
using namespace std;

bool palin(int i,string str,int n){
    if(i>=n/2) return true;
   if(str[i]!=str[n-i-1])
   return false;
   return palin(i+1,str,n);
}

int32_t main()
{
    string str="12321";
    // cin>>str;
    int n=str.size();
   if(palin(0,str,n)==0)
   cout<<"Not a palinfrome"<<endl;
   else
   cout<<"palindrome"<<endl;
    

    return 0;
}