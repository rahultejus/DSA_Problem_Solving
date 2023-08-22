#include <bits/stdc++.h>
using namespace std;

int printSum(int n, int s, int sum, int arr[], int ind)
{
    if (ind == n)
    {
        if (s == sum)
            return 1;
        else
            return 0;
    }

    s += arr[ind];
    int l = printSum(n, s, sum, arr, ind + 1);
    s -= arr[ind];
    int r = printSum(n, s, sum, arr, ind + 1);
    return l + r;
}

int32_t main()
{
    int n = 6;
    int arr[] = {1, 2, 1, 3,1,2};
    int sum = 6;
    cout << printSum(n, 0, sum, arr, 0);
    return 0;
}