#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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

int binaryToDecimal(int n){
    int carry, decimal = 0;
    
    for(int i=0; i<8; i++){
        carry = n%10;
        decimal += carry*pow(2,i);
        n /= 10;
    }

    return decimal;
    
}

int main()
{
    fastIO;

    int test, k;
    cin >> test;

    for(k=1; k<=test; k++){

        int a, b, c, d, aa, bb, cc, dd;
        char ch;

        cin >> a >> ch >> b >> ch >> c >> ch >> d;
        cin >> aa >> ch >> bb >> ch >> cc >> ch >> dd;

        if((binaryToDecimal(aa) == a) && (binaryToDecimal(bb) == b) && (binaryToDecimal(cc) == c) && (binaryToDecimal(dd) == d)) cout << "Case " << k << ": " << "Yes" << endl;
        else cout << "Case " << k << ": " << "No" << endl;
    }

    return 0;
}

// ----------------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// #define      endl            '\n'
// #define      yes             (cout << "YES\n")
// #define      no              (cout << "NO\n")
// #define      ll              long long
// #define      pb              push_back
// #define      pii             pair <int,int>
// #define      pll             pair <long long,long long>
// #define      rev(a)          reverse(a, a+n);
// #define      Srev(s)         reverse(s.begin(), s.end());
// #define      sz(s)           s.size()
// #define      gcd(a,b)        __gcd(a,b)
// #define      lcm(a,b)        (a*b)/gcd(a,b)
// #define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;

// string decimlToBinary(int n){
//     //int n = stoi(s);
//     string str;
//     if(n == 0){
//         string s = "0";
//         return s;
//     }

//     while(n != 0){
//         int val = n%2;
//         str.pb(val+'0');
//         n /= 2;
//     }
//     reverse(str.begin(), str.end());
//     return str;
// }

// int main()
// {
//     fastIO;

//     int test, k;
//     cin >> test;

//     for(k=1; k<=test; k++){

//         int a, b, c, d, aa, bb, cc, dd;
//         char ch;

//         cin >> a >> ch >> b >> ch >> c >> ch >> d;
//         cin >> aa >> ch >> bb >> ch >> cc >> ch >> dd;

//         string A = to_string(aa);
//         string B = to_string(bb);
//         string C = to_string(cc);
//         string D = to_string(dd);

//         // cout << decimlToBinary(a) << " " <<  A << endl;
//         // cout << decimlToBinary(b) << " " <<  B << endl;
//         // cout << decimlToBinary(c) << " " <<  C << endl;
//         // cout << decimlToBinary(d) << " " <<  D << endl;

//         if((decimlToBinary(a) != A) || (decimlToBinary(b) != B) || (decimlToBinary(c) != C) || (decimlToBinary(d) != D)) cout << "Case " << k << ": " << "No" << endl;
//         else cout << "Case " << k << ": " << "Yes" << endl;
//     }

//     return 0;
// }
