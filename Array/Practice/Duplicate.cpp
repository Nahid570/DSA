#include <bits/stdc++.h>
using namespace std;

void DuplicateElement(int arr[], int n)
{
    int lastDuplicate = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != lastDuplicate)
        {
            cout << arr[i] << " ";
            lastDuplicate = arr[i];
        }
    }
    cout << endl;
}

void DuplicateCount(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            int j = i + 1;
            while (arr[i] == arr[j])
                j++;
            cout << arr[i] << " appear " << j - i << " times" << endl;
            i = j - 1;
        }
    }
}

// Finding Dupplicate Element Using Hash Table
int H[21];
void DuplicateHash(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        H[arr[i]]++;
    for (int j = 0; j <= 20; j++)
    {
        if (H[j] > 1)
            cout << j << " appear " << H[j] << " times" << endl;
    }
}

// Finding duplicates in an unsorted Array
void DuplicateUnsorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
        }
        if (count > 1)
            cout << arr[i] << " appears " << count << " times" << endl;
    }
}

// Finding Duplicates in unsorted Array using Hashing
int H2[9];
void FindDuplicateHashingUnsorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        H2[arr[i]]++;
    }
    for (int i = 0; i <= 8; i++)
    {
        if (H2[i] > 1)
            cout << i << " appear " << H2[i] << " times" << endl;
    }
}

int main()
{
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int arr2[] = {8, 3, 6, 4, 6, 5, 6, 6, 8, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    FindDuplicateHashingUnsorted(arr2, n);
    // DuplicateUnsorted(arr2, n);
    // DuplicateHash(arr, n);
    // DuplicateCount(arr, n);
    // DuplicateElement(arr, n);

    return 0;
}