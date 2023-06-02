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
//#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    // fastIO;

    int test, i;
    cin >> test;

    for(i=1; i<=test; i++){
        string str;
        cin >> str;
        int j, k, flag = 0;
        j = 0; 
        k = sz(str)-1;

        while(j<k){
            if(str[j] != str[k]){
                flag = 1;
                break;
            }
            j++;
            k--;
        }

        if(flag == 0) cout << "Case " << i << ": Yes" << endl;
        else cout << "Case " << i << ": No" << endl;
    }

    return 0;
}
