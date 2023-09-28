/*
Submission: https://practice.geeksforgeeks.org/problems/merge-sort/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/
#include <bits/stdc++.h>

using namespace std;

void mergeSort(int arr[], int p, int r) {
    if(p >= r) return;

    int q = p + (r - p) / 2;
    mergeSort(arr, p, q);
    mergeSort(arr, q + 1, r);

    int temp[r - p + 1], i = p, j = q + 1, k = 0;

    while(i <= q && j <= r) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while(i <= q) {
        temp[k++] = arr[i++];
    }
    while(j <= r) {
        temp[k++] = arr[j++];
    }
    for(i = p, k = 0; i <= r; i++) {
        arr[i] = temp[k++];
    }

}

int main() {
    freopen("input.txt", "r", stdin);
    //freopen("implementation\\output.txt", "w", stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}