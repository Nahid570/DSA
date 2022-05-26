#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}

void sumI(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

int sumE(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int r = sum(5);
    cout << r << endl;
    sumI(5);
    int e = sumE(5);
    cout << e << endl;

    return 0;
}