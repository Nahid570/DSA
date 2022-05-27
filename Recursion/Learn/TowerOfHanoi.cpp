#include <bits/stdc++.h>
using namespace std;

void Tower(int n, int A, int B, int C)
{
    if (n > 0)
    {
        Tower(n - 1, A, C, B);
        cout << "(" << A << "," << C << ")";
        Tower(n - 1, B, C, A);
    }
}

int main()
{
    Tower(3, 1, 2, 3);
    cout << endl;
    return 0;
}