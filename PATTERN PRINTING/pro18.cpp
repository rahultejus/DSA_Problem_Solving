#include<iostream>
using namespace std;
int main()
{
    int i,j;
   
    for(i=1;i<6;i++)
    {
         int m=65;
       for(j=5;j>i;j--){
       cout<<" ";}
       for(j=1;j<=i;j--){
       cout<<char(m)<<" ";
       m++;
       }
       cout<<endl;
    }
    
}