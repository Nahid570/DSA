#include <bits/stdc++.h>
using namespace std;

void MinMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

int main()
{
    int arr[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    MinMax(arr, n);

    return 0;
}