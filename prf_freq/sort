
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
  int a[n];
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    int freq[100001]={0};
    for (int i = 0; i <n ; ++i) {
        freq[a[i]]++;
    }
    for (int i = 0; i <=100000; ++i) {
        while(freq[i])
        {
            cout<<i<<' ';
            freq[i]--;
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
