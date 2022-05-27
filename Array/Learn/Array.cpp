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

int main()
{
    Array arr = {{1, 2, 3, 4, 5}, 10, 5};

    // Append(&arr, 30);
    // Insert(&arr, 3, 7);
    // cout << "Deleted Element: " << Delete(&arr, 2) << endl;
    // cout << "Element found at index: " << LinearSearchM(&arr, 5) << endl;
    Display(arr);
    cout << endl;

    return 0;
}