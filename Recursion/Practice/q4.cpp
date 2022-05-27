#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    int x = 1, k;
    if (n == 1)
        return 1;
    for (k = 1; k < n; ++k)
    {
        x = x + fun(k) * fun(n - k);
    }
    return x;
}

int main()
{
    cout << fun(5) << endl;

    return 0;
}