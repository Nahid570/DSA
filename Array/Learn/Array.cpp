#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(Array arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}

void Append(Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
}

void Insert(Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(Array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == key)
            return i;
    }
    return -1;
}

// Linear Search(Transposition)
int LinearSearchT(Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            Swap(&arr->A[i], &arr->A[i - 1]);
            return i - 1;
        }
    }
    return -1;
}

// Linear Search(Move to Head)
int LinearSearchM(Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            Swap(&arr->A[i], &arr->A[0]);
            return 0;
        }
    }
    return -1;
}

// Binary Search(Iterative)
int BinarySearch(Array arr, int key)
{
    int mid, l, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}

// Binary Search(Recursive)
int BinarySearchR(Array arr, int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (arr.A[mid] == key)
            return mid;
        if (arr.A[mid] > key)
            return BinarySearchR(arr, l, mid - 1, key);
        else
            return BinarySearchR(arr, mid + 1, h, key);
    }
    return -1;
}

int Get(Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

void Set(Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int Min(Array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int Sum(Array arr)
{
    int i, total = 0;
    for (i = 0; i < arr.length; i++)
    {
        total += arr.A[i];
    }
    return total;
}

// Recursive sum
int SumR(Array arr, int n)
{
    if (n < 0)
        return 0;
    else
        return SumR(arr, n - 1) + arr.A[n];
}

float Average(Array arr)
{
    return (float)Sum(arr) / arr.length;
}

void Reverse(Array *arr)
{
    int *B = new int[arr->length];
    int i, j;
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}

// Reverse an array without an auxilary Array
void Reverse2(Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
        Swap(&arr->A[i], &arr->A[j]);
}

void InsertSorted(Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return false;
    }
    return true;
}

void Rearrange(Array *arr)
{
    int i = 0, j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
        {
            Swap(&arr->A[i], &arr->A[j]);
        }
    }
}

Array *Merge(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    Array *arr4 = new Array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr4->A[k++] = arr1->A[i++];
        else
            arr4->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
        arr4->A[k++] = arr1->A[i++];
    for (; j < arr1->length; j++)
        arr4->A[k++] = arr2->A[j++];
    arr4->length = arr1->length + arr2->length;
    return arr4;
}

Array *Union(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    Array *arr4 = new Array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr4->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr4->A[k++] = arr2->A[j++];
        else
        {
            arr4->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr4->A[k++] = arr1->A[i++];
    for (; j < arr1->length; j++)
        arr4->A[k++] = arr2->A[j++];
    arr4->length = k;
    return arr4;
}

Array *Intersection(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    Array *arr4 = new Array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            arr4->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr4->length = k;
    return arr4;
}

Array *Difference(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    Array *arr4 = new Array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr4->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr4->A[k++] = arr1->A[i++];
    arr4->length = k;
    return arr4;
}

int main()
{
    // Array arr = {{1, -3, 5, 7, -9, 7, 0, -1}, 10, 8};
    Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};

    Array *arr3 = Difference(&arr1, &arr2);
    Display(*arr3);

    // Rearrange(&arr);
    // cout << isSorted(arr) << endl;
    // InsertSorted(&arr, 8);
    // Reverse2(&arr);
    // Reverse(&arr);
    // cout << "Average: " << Average(arr) << endl;
    // cout << "SumR: " << SumR(arr, arr.length) << endl;
    // cout << "Sum: " << Sum(arr) << endl;
    // cout << "Min: " << Min(arr) << endl;
    // cout << "Max: " << Max(arr) << endl;
    // Set(&arr, 2, 7);
    // cout << "Get: " << Get(arr, 2) << endl;
    // Append(&arr, 30);
    // Insert(&arr, 3, 7);
    // cout << "Deleted Element: " << Delete(&arr, 2) << endl;
    // cout << "Element found at index: " << LinearSearchM(&arr, 5) << endl;
    // cout << BinarySearchR(arr,0, arr.length-1, 3) << endl;
    // Display(arr);
    cout << endl;

    return 0;
}