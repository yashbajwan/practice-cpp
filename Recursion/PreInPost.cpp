#include <bits/stdc++.h>
using namespace std;
void fun(int a)
{
    if (a <= 0)
        return;
    cout << a << " Pre Hello" << endl;

    fun(a - 1);
    cout << a << " In Hi" << endl;

    fun(a - 2);
    cout << a << " Post bye" << endl;
}

int main()
{
    fun(5);
}
