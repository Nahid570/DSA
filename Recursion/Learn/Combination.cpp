#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int nCr(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}

int nCrR(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    return nCrR(n - 1, r - 1) + nCrR(n - 1, r);
}

int main()
{
    // cout << nCr(5, 2) << endl;
    cout << nCrR(5, 2) << endl;

    return 0;
}