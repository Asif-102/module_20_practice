/*
Question:

Given an integer array A with size N and an integer K,where 0< N, K <10^5 . Write a program for getting Kth minimum and Kth maximum number from the given array.

Sample input:
6 3
1 13 20 4 15 17
Sample output:
13 15
Explanation: 1st minimum: 1, 2nd minimum: 4, third minimum: 13
 1st maximum: 20, 2nd maximum: 17, 3rd maximum: 15

*/
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;

    int array[n];
    for(int i = 0; i < n; i++)
        cin >> array[i];

    sort(array, array+n);

    int min = array[k-1];
    int max = array[n-k];

    cout << min << " " << max;
}
