#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=0;i--)
    {
        int m=65;
        for(j=0;j<i;j++){
        cout<<char(m)<<" ";
        m++;
        }
        m++;
        cout<<endl;
    }
}