#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    ll temp=n,maxfac=-1,maxco=0;

    for (ll i=2;i*i<=n;i++) {
        ll co = 0;
        while (temp % i == 0) {
            temp /= i;
            co++;
        }

        if (co > maxco)
        {
            maxco = co;
            maxfac = i;
        }
    }

    if (temp > 1) {
        if (maxco == 0) {
            maxfac = temp;
            maxco = 1;
        }
    }

    cout << maxco << endl;
    for (ll i = 0; i < maxco - 1; i++) {
        cout << maxfac << " ";
        n /= maxfac;
    }

    cout << n << endl;
}

int main() {
    int t;
    cin >> t;
   for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}


