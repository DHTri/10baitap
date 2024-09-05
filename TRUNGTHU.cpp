#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;cin>>n;
    int m;cin>>m;
    int a[n];
    int res = INT_MAX;
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
        m -= a[i];
        res = min(res , a[i]);
    }
    int d = 0;
    while(1)
    {
        if(m-res >= 0)
        {
            m -= res;
            d++;
        }
        else 
        break;
    }    
    cout<<n+d;
} 
