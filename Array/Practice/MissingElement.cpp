#include <bits/stdc++.h>
using namespace std;

// Single Missing Element Sorted
void SMESorted(int arr[], int n)
{
    int l = arr[0];
    int diff = l - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            cout << "Missing Element is: " << diff + i << endl;
            break;
        }
    }
}

// Multiple Missing Element Sorted
void MMESorted(int arr[], int n)
{
    int diff = arr[0] - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << diff + i << " ";
                diff++;
            }
        }
    }
    cout << endl;
}

int H[13];

// Find Missing Element using Hashing
void MEUH(int arr[], int n)
{
    int l = 1;
    int h = 12;

    for (int i = 0; i < n; i++)
        H[arr[i]]++;
    for (int i = l; i <= h; i++)
    {
        if (H[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    int n = sizeof(A) / sizeof(A[0]);

    MEUH(A, n);
    // MMESorted(A, n);
    // SMESorted(A, n);

    return 0;
}