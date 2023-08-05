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

    int test;
    cin >> test;

    for(int k=1; k<=test; k++){
        ll n;
        cin >> n;

        bool flag = __builtin_parity(n);        // This function return true if the binary representation of n has odd number of 1 bit, and return false for even number of 1 bit //

        if(flag) cout << "Case " << k << ": " << "odd" << endl; 
        else cout << "Case " << k << ": " << "even" << endl;
    }

    return 0;
}
