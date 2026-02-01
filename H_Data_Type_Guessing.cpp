#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k, a;
    cin >> n >> k >> a;
 
    long long prod = n * k;
 
    // Check if result is fractional
    if (prod % a != 0) {
        cout << "double\n";
    } 
    else {
        long long res = prod / a;
        if (res >= INT_MIN && res <= INT_MAX)
            cout << "int\n";
        else
            cout << "long long\n";
    }
 
    return 0;
}