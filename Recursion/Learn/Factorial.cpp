#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}

void factI(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << fact << endl;
}

int main()
{
    int f = fact(5);
    cout << f << endl;

    factI(5);

    return 0;
}