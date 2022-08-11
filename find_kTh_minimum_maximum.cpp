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
