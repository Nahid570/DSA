#include <bits/stdc++.h>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return pow(m, n - 1) * m;
}

// calculate power of a number using less multiplication
int pow2(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow2(m * m, n / 2);
    else
        return m * pow2(m * m, (n - 1) / 2);
}

void Ipow(int m, int n)
{
    int pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow *= m;
    }
    cout << pow << endl;
}

int main()
{

    int p = pow(2, 4);
    cout << p << endl;

    int p2 = pow2(2, 9);
    cout << p2 << endl;

    Ipow(2, 8);

    return 0;
}