#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    int t1 = n1;
    int t2 = n2;

    while (t2 != 0)
    {
        int rem = t1 % t2;
        t1 = t2;
        t2 = rem;
    }

    int lcm = (n1 * n2) / t1;

    cout << "GCD: " << t1 << endl;
    cout << "LCM: " << lcm << endl;

    // Find GCD using recursion
    cout << "Recursion GCD: " << GCD(n1, n2) << endl;

    return 0;
}