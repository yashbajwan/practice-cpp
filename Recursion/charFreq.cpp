// frequency of given char in a string
#include <bits/stdc++.h>
using namespace std;

int charFreq(char *s, char ch, int i, int freq)
{
    if (s[i] == ch)
        freq + 1;
    return charFreq(s, ch, i + 1, freq);
}

int main()
{
    char s[20], ch;
    cout << "Enter string:";
    gets(s);
    cout << "char:";
    cin >> ch;
    cout << charFreq(s, ch, 0, 0);
}
