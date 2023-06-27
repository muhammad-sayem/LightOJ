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
        double R, n;
        cin >> R >> n;

        double area_of_large_circle = acos(-1)*R*R;

        double val = (area_of_large_circle) / (n*acos(-1));

        double total_area_of_small_circles = sqrt(val);

        double ans = (total_area_of_small_circles) / n;

        cout << fixed << setprecision(10) << ans << endl;


    }



    return 0;
}
