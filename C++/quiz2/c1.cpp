#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    if (s[i] == ' ' && s[i + 1] == ' ')
    {
        s.erase(i, 1);
        i=i-1;
    }
    cout << s;
}