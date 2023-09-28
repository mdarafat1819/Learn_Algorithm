/*
Submission: https://practice.geeksforgeeks.org/problems/value-of-polynomial2413/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    long long p = 1, res = 0;
    // for(int i = n - 1; i >= 0; i--) {
    //     res += arr[i] * p;
    //     p *= x;
    // }
    for(int i = 0; i < n; i++) {
        res = arr[i] + res * x;
    }
    cout<<res<<endl;

    return 0;
}