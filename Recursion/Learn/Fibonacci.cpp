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
    return fibR(n - 2) + fibR(n - 1);
}

// Better Recursive Method (Memoization)
int F[10];
int fibM(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fibM(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = fibM(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
    return 0;
}

int main()
{

    // Iterative
    cout << "Iterative " << fib(10) << endl;

    // Recursive
    cout << "Recursive " << fibR(7) << endl;

    // Memoization method
    for (int i = 0; i < 10; i++)
        F[i] = -1;

    cout << "Memoization " << fibM(7) << endl;

    return 0;
}