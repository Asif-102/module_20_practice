/*
Given an integer N. Write a program to print all prime numbers between 1 and N.

Sample input:
5

Sample output:
2 3 5

*/
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n < 2)
        return false;
    if(n > 2 && n % 2 == 0)
        return false;

    for(int i = 3; i <= sqrt(n); i+=2)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main(void)
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }
}
