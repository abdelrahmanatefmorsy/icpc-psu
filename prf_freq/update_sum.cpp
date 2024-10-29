
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define vi vector
using namespace std;
using namespace __gnu_pbds;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
//#define sort(X) sort(X.begin(),X.end());
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int test)
{
  int n;
  cin>>n;
  int t;
  cin>>t;
  int a[100001];
    for (int i = 1; i <=n ;++i) {
        cin>>a[i];
    }
   ll part[100002]={0};
    while(t--)
    {
        int l , r,val;
        cin>>l>>r>>val;
        part[l]+=val;
        part[r+1]-=val;
    }
    for(int i = 1;i<=n;i++)
    {
        part[i]+=part[i-1];
    }
    for (int i = 1; i <=n; ++i) {
        cout<<part[i] + a[i]<<' ';
    }
}
int main() {
    IOS;
    int t = 1;
    for (int i = 1; i <=t ; ++i) {
        solve(i);
        cout<<'\n';
    }
}
