#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++){
        cout<<j;
        }
        for(j=i+1;j<6;j++)
        {
            cout<<" ";
        }    
        for(j=i;j<5;j++)
        {
            cout<<" ";
        }   
        for(j=i;j>0;j--){
        cout<<j;
        } 

        cout<<endl;
    }
}