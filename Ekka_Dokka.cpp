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
    fastIO;                     // From Tutorial //

    int test, k;
    cin >> test;

    for(k=1; k<=test; k++){
        ll w, n, m;
        cin >> w;

        if(w%2 != 0) cout << "Case " << k << ": Impossible" << endl;

        else{
            n = w/2;
            m = 2;

            while(n%2 == 0){
                n /= 2;
                m *= 2;
            }

            cout << "Case " << k << ": " << n << " " << m << endl;

        }

    }

    return 0;
}
