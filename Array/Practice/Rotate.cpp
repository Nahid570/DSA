#include <bits/stdc++.h>
using namespace std;

void leftRotate(int *arr, int d, int n)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    int x = 0;
    for (int j = d; j < n; j++)
    {
        arr[x] = arr[j];
        x++;
    }
    x = 0;
    for (int k = n - d; k < n; k++)
    {
        arr[k] = temp[x++];
    }
}

// rotate by one
void leftRotate2(int *arr, int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotate2(arr, d, n);
    display(arr, n);
}