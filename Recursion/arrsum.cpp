#include <bits/stdc++.h>
using namespace std;
int arr(int a[], int n)
{
    if (n <= 0)
        return 0;
    return a[n - 1] + arr(a, n - 1);
}

int main()
{
    int a[10], n;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "\n";
    cout << arr(a, n);
}
//in dev branch