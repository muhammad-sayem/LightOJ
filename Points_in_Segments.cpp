#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      sort(a)         sort(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test, k;
    cin >> test;

    for(k=1; k<=test; k++){
        int n, q, i;
        cin >> n >> q;

        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        cout << "Case " << k << ": " << endl;

        while(q--){
            int x, y;
            cin >> x >> y;

            int val1 = lower_bound(a, a+n, x)-a;
            int val2 = upper_bound(a, a+n, y)-a;

            cout << val2-val1 << endl;

        }
    }

    return 0;
}
