#include <bits/stdc++.h>
using namespace std;

void FindPair(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
                cout << arr[i] << " + " << arr[j] << " = " << k << endl;
        }
    }
}

// Find Pair of element using Hash Table
int H[17];
void FindPairHash(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (H[k - arr[i]] > 0)
        {
            cout << arr[i] << " + " << k - arr[i] << " = " << k << endl;
        }
        H[arr[i]]++;
    }
}

// Find Pair in Sorted Array
void PairSorted(int arr[], int n, int k)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            cout << arr[i] << " + " << arr[j] << " = " << k << endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < k)
            i++;
        else
            j--;
    }
}

int main()
{
    // int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 4, 14};
    int arr[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    PairSorted(arr, n, 10);
    // FindPairHash(arr, n, 10);
    // FindPair(arr, n, 10);

    return 0;
}