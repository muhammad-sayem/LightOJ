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

    while(test--){
        string s1, s2, s3, s4, s5, s6, s7, s8;
        cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
        int flag = 0;

        if(s1 == "RRRRRRRR") flag = 1;
        else if(s2 == "RRRRRRRR") flag = 1;
        else if(s3 == "RRRRRRRR") flag = 1;
        else if(s4 == "RRRRRRRR") flag = 1;
        else if(s5 == "RRRRRRRR") flag = 1;
        else if(s6 == "RRRRRRRR") flag = 1;
        else if(s7 == "RRRRRRRR") flag = 1;
        else if(s8 == "RRRRRRRR") flag = 1;

        if(flag == 1) cout << 'R' << endl;
        else cout << 'B' << endl;
    }



    return 0;
}
