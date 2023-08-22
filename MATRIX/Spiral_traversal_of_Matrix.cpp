#include<bits/stdc++.h>
#define M 4
#define N 4
using namespace std;
void print_spiral_matrix(int arr[M][N])
{
    int top=0,right=N-1,bottom=M-1,left=0;
    while(left<=right && top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--)
        {
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        }
        if(left<=right){
        for(int i=bottom;i>=top;i--)
        {
            cout<<arr[i][left]<<" ";
        }
        left++;
        }
    }
}


int main()
{
    int arr[M][N]={{1,2,3,4},
                             {5,6,7,8},
                             {5,4,3,2},
                             {9,5,2,0}};
print_spiral_matrix(arr);
                             return 0;
}