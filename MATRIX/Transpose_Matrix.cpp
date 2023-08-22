 #include<bits/stdc++.h>
 #define m 4
 #define n 4
 using namespace std;
 
 void Transpose_Mat(int arr[m][n])
 {
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[j][i]<<" ";
        cout<<endl;
    }
 }

 int32_t main()
 {
     int arr[m][n]={{1,2,3,4},
                             {5,6,7,8},
                             {5,4,3,2},
                             {9,5,2,0}};
   Transpose_Mat(arr);
    return 0;
 }