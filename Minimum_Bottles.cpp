#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }
        cout << ceil((double)sum/x) << endl;
    }
    return 0;
}