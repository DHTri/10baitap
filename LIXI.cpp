#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;cin>>s;
    int k;cin>>k;
    string ans = "";
    for(int i =0;i<=s.length();i++)
    {
        while(!ans.empty() && k > 0 && ans.back() < s[i])
        {
            ans.pop_back();
            k--;
        }
        ans.push_back(s[i]);
    }
    while(k > 0)
    {
        ans.pop_back();
        k--;
    }
    ans.erase(0 , ans.find_first_not_of('0'));
    if(ans.empty())
        ans = "0";
    cout<<ans;
} 
