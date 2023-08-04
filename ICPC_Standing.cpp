#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    
    for(int k=1; k<=test; k++){
        int p, s, r;
        cin >> p >> s >> r;
        
        if(s == p && r != 1) cout << "Case " << k << ": " << "No" << endl;
        else cout << "Case " << k << ": " << "Yes" << endl;
    }
    
    return 0;
}