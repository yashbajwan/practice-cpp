#include <bits/stdc++.h>
using namespace std;

void euler3(int n, int level)
{
    if (n <= 2)
    {
        cout << "Base: " << n * level << endl;
        return;
    }

    cout << "Pre: " << n * level << endl;
    euler3(n - 1, level + 1);

    cout << "In1: " << n * level << endl;
    euler3(n - 2, level + 1);

    cout << "In2: " << n * level << endl;
    euler3(n - 3, level + 1);

    cout << "Post: " << n * level << endl;
}

int main()
{
    euler3(5, 5);
}
