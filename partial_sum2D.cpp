
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
    int n , m;
    cin>>n>>m;
    int t;
    cin>>t;
    int n1 = n+1;
    int m1 = m+1;
  int a[n1][m1];
  ll prf[n1][m1];
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=m ; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i <=n ; ++i) {
        for (int j = 0; j <=m ; ++j) {
            prf[i][j]=0;
        }
    }
    while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int val;
        cin>>val;
        prf[x1][y1]+=val;
        prf[x1][y1+1]-=val;
        prf[x2+1][y1]-=val;
        prf[x2+1][y2+1]+=val;
    }
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=n ; ++j) {
            prf[i][j]+=prf[i][j-1];
        }
    }
    for (int i = 1; i <=m ; ++i) {
        for (int j = 1; j <=n ; ++j) {
            prf[j][i]+=prf[j-1][j];
        }
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
