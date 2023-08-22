#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n;
   
    for(i=1;i<6;i++)
    {
        if(i%2==0){
         m=0,n=1;}
            else{
                m=1,n=0;
            }

        for(j=0;j<i;j++){
            
        cout<<m<<" ";
        swap(m,n);
        }
        cout<<endl;
        
    }
    return 0;
}