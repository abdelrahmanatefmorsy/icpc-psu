#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define vi vector<ll>
using namespace std;
using namespace __gnu_pbds;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
bool checkBit(int x, int i)
{
    return x & (1 << i);
}
int set(int x, int i)
{
    return x | (1 << i);
}
int reset(int x, int i)
{
    return x & (~(1 << i));
}
int flipBit(int x, int i)
{
    return x ^ (1 << i);
}
int LSB(int x)
{
    return x & (-x);
}
bool PowerOfTwo(int x)
{
    cout<<~(x&(x-1));
}
string to_binary(int n)
{
    string s = "";
    while(n)
    {
        s.push_back((n%2) +'0');
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int to_decimal(string s)
{
    reverse(s.begin(),s.end());
    int num = 0;
    for (int i = 0; i <s.size(); ++i) {
        num+=pow(2,i) * (s[i] - '0');
    }
    return num;
}


void subseq(int n , vector<int>v)
{
    int res = (1<<n)-1;
    for(int i = 0;i<=res;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(checkBit(i,j)==1)
            {
                cout<<v[j]<<" ";
            }
        }
        cout<<endl<<" ";
    }
}

