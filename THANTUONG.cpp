#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;cin>>n;
    map<int , int>mp;
    for(int i =1;i<=n;i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    int res = 0;
    for(map<int ,int> :: iterator it = mp.begin() ; it != mp.end() ; it++)
        res = max(res , it->second);
    for(map<int ,int> :: iterator it = mp.begin() ; it != mp.end() ; it++)
    {
        if(res == it->second)
        {
            cout<<it->first<<endl;
        }
    }  
} 
