#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        fun(n - 1);
    }
}

void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        cout << n << " ";
    }
}

int main()
{
    int x = 3;

    // fun(x);
    fun2(x);

    cout << endl;

    return 0;
}