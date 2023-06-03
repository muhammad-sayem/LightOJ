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

    int test, i;
    cin >> test;

    for(i=1; i<=test; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int m;
        cin >> m;

        cout << "Case " << i << ":" << endl;

        while(m--){
            int a, b;
            cin >> a >> b;

            if(a<x1 || a>x2) cout << "No" << endl;
            else if(b<y1 || b>y2) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }

    return 0;
}

