#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);

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
    cin.ignore();

    for(k=1; k<=test; k++){
        string s1;
        string s2;

        getline(cin, s2);
        getline(cin, s1);

        for(int i=0; i<s1.size(); i++){
            if(s1[i] >= 'A' && s1[i] <= 'Z'){
                s1[i] += 32;
            }
        }

        for(int i=0; i<s2.size(); i++){
            if(s2[i] >= 'A' && s2[i] <= 'Z'){
                s2[i] += 32;
            }
        }

        int len1 = sz(s1);
        int len2 = sz(s2);

        int val = min(len1, len2);

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        bool flag = true;

        for(int i=0; i<val; i++){
            if(s1[i] != s2[i]){
                flag = false;
                break;
            }
        }

        if(flag) cout << "Case " << k << ": Yes" << endl;
        else cout << "Case " << k << ": No" << endl;
 
    }

    return 0;
}
