#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i =1;i<=n;i++)
        cin>>a[i];
    int res = INT_MIN;
    for(int i =1;i<=n-1;i++)
    {
        int s = a[i] + a[i+1];
        res = max(s , res);
    }
    cout<<res;
} 
