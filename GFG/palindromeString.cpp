#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string S)
{
    // Your code goes here
    int i = 0, j = S.size() - 1;

    while (i < j)
    {
        if (S[i] != S[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main()
{
    return 0;
}