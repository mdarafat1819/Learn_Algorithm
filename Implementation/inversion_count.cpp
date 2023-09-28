/*
Problem Link: https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
*/
#include <bits/stdc++.h>

using namespace std;

long long inv_count(int arr[], int l, int r) {

    if(l >= r) return 0;

    int mid = l + (r - l) / 2;
    long long cnt = 0;
    cnt += inv_count(arr, l, mid);
    cnt += inv_count(arr, mid + 1, r);

    int temp[r - l + 1], i = l, j = mid + 1, k = 0;

    while(i <= mid && j <= r) {
        if(arr[i] > arr[j]) {
            temp[k++] = arr[j++];
            cout<<i<<" "<<j<<endl;
            cnt += (mid - i + 1);
        }
        else temp[k++] = arr[i++];
    }

    while(i <= mid) {
        temp[k++] = arr[i++];
    }
    while(j <= r) {
        temp[k++] = arr[j++];
    }

    for(int i = l, k = 0; i <= r; i++) {
        arr[i] = temp[k++];
    }
    return cnt;
}

int main() {

    freopen("input.txt", "r" ,stdin);

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<inv_count(arr, 0, n - 1)<<endl;

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}