#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << '=' << x << endl

void sort012(int a[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            c0++;
        else if (a[i] == 1)
            c1++;
        else
            c2++;
    }

    for (int i = 0; i < c0; i++)
    {
        a[i] = 0;
    }
    for (int i = c0; i < c1 + c0; i++)
    {
        a[i] = 1;
    }
    for (int i = c1 + c0; i < c2 + c1 + c0; i++)
    {
        a[i] = 2;
    }
}

int main()
{

    int a[] = {0, 1, 2, 1, 2, 2, 0, 0, 0, 2, 1, 2, 0};
    int n = sizeof(a) / sizeof(a[0]);

    sort012(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
    return 0;
}