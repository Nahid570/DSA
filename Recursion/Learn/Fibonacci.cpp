#include <bits/stdc++.h>
using namespace std;

// Interative Method
int fib(int n)
{
    int t0 = 0, t1 = 1, s, i;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// Recursive Method
int fibR(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 2) + fib(n - 1);
}

int main()
{

    // Iterative
    cout << "Iterative " << fib(7) << endl;

    // Recursive
    cout << "Recursive " << fibR(7) << endl;

    return 0;
}