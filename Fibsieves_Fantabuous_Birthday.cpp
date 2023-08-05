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

        if(n == 1) cout << "Case " << k << ": " << 1 << " " << 1 << endl;
        
        else{
            ll val = sqrt(n);

            if((val*val) == n){
                if(val%2 == 0){
                    cout << "Case " << k << ": " << val << " " << 1 << endl;
                }
                if(val%2 != 0){
                    cout << "Case " << k << ": " << 1 << " " << val << endl;
                }
            }

            else{

                if(val%2 != 0){
                    ll x = n-(val*val);
                    
                    if(x <= val) cout << "Case " << k << ": " << x << " " << val+1 << endl;
                    else {
                        ll y = ((val+1)*2)-x;
                        cout << "Case " << k << ": " << val+1 << " " << y << endl;
                    }
                }
                else{
                    ll x = n-(val*val);
                    
                    if(x <= val) cout << "Case " << k << ": " << val+1 << " " << x << endl;
                    else {
                        ll y = ((val+1)*2)-x;
                        cout << "Case " << k << ": " << y << " " << val+1 << endl;
                    }
                }
            }
        }
    }

    return 0;
}
