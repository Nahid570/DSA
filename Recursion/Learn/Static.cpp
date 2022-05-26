#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int a = 5;
    
    cout << fun(a) << " ";

    cout << endl;

    return 0;
}