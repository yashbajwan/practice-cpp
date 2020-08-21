#include <bits/stdc++.h>
using namespace std;

void euler2(int n, int level)
{
    if (n <= 1)
    {
        cout << "Base: " << n << " @ " << level << endl;
        return;
    }

    cout << "Pre: " << n << " @ " << level << endl;

    euler2(n - 1, level + 1);
    cout << "In: " << n << " @ " << level << endl;

    euler2(n - 2, level + 1);
    cout << "Post: " << n << "@" << level << endl;
}

int main()
{
    euler2(5, 5);
}
