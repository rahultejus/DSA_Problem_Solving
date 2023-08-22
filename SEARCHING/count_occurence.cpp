#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define rep0(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i < n; i++)
#define repa(i, a, n) for (int i = a; i < n; i++)

using namespace std;
int first_occ(int arr[], int n, int x)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (arr[mid] == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int last_occ(int arr[], int n, int x)
{
    int low = 0, high = n - 1, mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (arr[mid] == 0 || arr[mid+1] != arr[mid])
                return mid;
            else
                low = mid +1;
        }
    }
    
    return -1;
}
int count_occ(int arr[], int n, int x)
{
    int first =first_occ(arr, n, x);
    int last=last_occ(arr,n,x);
    if (first == -1){
        return 0;
    }
    else{
    return ((last- first)+1);
}}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << count_occ(arr, n, 4)<<endl;
    cout << first_occ(arr, n, 4)<<endl;
    cout << last_occ(arr, n, 4)<<endl;
    return 0;
}