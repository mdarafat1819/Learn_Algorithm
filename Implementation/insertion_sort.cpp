/*
Practice Problem: https://practice.geeksforgeeks.org/problems/insertion-sort/1
*/
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {

        int j = i;
        while (j > 0)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                j--;
            }
            else
                break;
        }
    }
}
// Without Swap Function
void insertionSort2(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i, key = arr[i];
        while (j > 0 && key < arr[j - 1])
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // insertionSort(arr, n);
    insertionSort2(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}