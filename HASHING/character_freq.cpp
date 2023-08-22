#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
   string s;
   cin>>s;
   int hash[256]={0};
   for(int i=0;i<s.size();i++) {
    hash[s[i]]++;
   }
   int q;
   cin>>q;
   while(q>0){
    char c;
      cin>>c;
      q--;
      cout<<hash[c]<<" "<<endl;
   }
    return 0;
}