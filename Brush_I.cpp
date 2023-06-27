#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, i, j;
    cin >> test;

    for(i=1; i<=test; i++){
        int n, sum = 0;
        cin >> n;
        int a[n];

        for(j=0; j<n; j++){
            cin >> a[j];
            if(a[j]>0) sum += a[j];
        }

        cout << "Case " <<i<< ": " << sum << endl;
    }

    return 0;
}
