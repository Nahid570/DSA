#include <bits/stdc++.h>
using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

// Taylor series with less multiplication
double e1(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e1(x, n - 1);
}

double Ie2(int x, int n)
{
    double s;
    for (; n > 0; n--)
        s = 1 + x * s / n;
    return s;
}

int main()
{
    cout << Ie2(1, 10) << endl;
    return 0;
}