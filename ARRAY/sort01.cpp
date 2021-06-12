#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << '=' << x << endl

//Method 1. BY counting the occurence of number and than replacing with array elements
//T.C is O(n)
// void sort01(int a[], int n)
// {
//     int c0 = 0, c1 = 0, c2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//             c0++;
//         else if (a[i] == 1)
//             c1++;

//     }

//     for (int i = 0; i < c0; i++)
//     {
//         a[i] = 0;
//     }
//     for (int i = c0; i < c1 + c0; i++)
//     {
//         a[i] = 1;
//     }

// }

//TWO Pointer approach
void sort01(int a[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        if (a[s] == 1 && a[e] == 0)
        {
            swap(a[s], a[e]);
            s++;
            e--;
        }
        else if (a[s] == 1 && a[e] == 1)
            e--;
        else if (a[s] == 0 && a[e] == 1)
        {
            s++;
            e--;
        }
        else
            s++;

       
    }
}

//TWO Pointer approach but in better case study
void sort01(int a[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        if(a[s]==1){
            swap(a[s],a[e]);
            e--;
        }
        else
            s++;

       
    }
}

int main()
{

    int a[] = {0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0};
    int n = sizeof(a) / sizeof(a[0]);

    sort01(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
    return 0;
}