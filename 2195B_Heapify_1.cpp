#include <bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; while(t--)
#define optimize() ios_base::sync_with_stdio(0); cin.tie(NULL);

int getRoot(int x) {
    while (x % 2 == 0) x /= 2; // keep dividing by 2 until odd
    return x;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1), pos(n+1);

    for(int i=1; i<=n; i++) {
        cin >> a[i];
        pos[a[i]] = i; // store position of each value
    }

    bool canSort = true;

    for(int i=1; i<=n; i++) {
        if(getRoot(i) != getRoot(pos[i])) {
            canSort = false;
            break;
        }
    }

    if(canSort) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    optimize();
    testcase solve();
    return 0;
}