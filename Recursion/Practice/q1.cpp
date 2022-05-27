#include <bits/stdc++.h>
using namespace std;

int q1(int n)
{
    static int i = 1;
    if (n >= 5)
        return n;
    n = n + i;
    i++;
    return q1(n);
}

int main()
{
    cout << q1(1) << endl;

    return 0;
}