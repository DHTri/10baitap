#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int kt(int n)
{
    int d = 0;
    for(int i =1;i<=n;i++)
        if(n%i == 0)
            d++;
    return d;
}

int main()
{
    int n;cin>>n;
    int a[n];
    int d = 0, d2 = 0;
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
        if(kt(a[i]) % 2 == 0)
            d++;
        else
            d2++;
    }    
    cout<<d<<endl<<d2;
} 
