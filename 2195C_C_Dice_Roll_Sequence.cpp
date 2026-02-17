#include <bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; while(t--)

int main() {
    // Define adjacency for a standard die
    bool adjacent[7][7] = {false};
    
    // Set up adjacency relationships
    // Face 1: {2,3,4,5}
    adjacent[1][2] = adjacent[1][3] = adjacent[1][4] = adjacent[1][5] = true;
    // Face 2: {1,3,4,6}
    adjacent[2][1] = adjacent[2][3] = adjacent[2][4] = adjacent[2][6] = true;
    // Face 3: {1,2,5,6}
    adjacent[3][1] = adjacent[3][2] = adjacent[3][5] = adjacent[3][6] = true;
    // Face 4: {1,2,5,6}
    adjacent[4][1] = adjacent[4][2] = adjacent[4][5] = adjacent[4][6] = true;
    // Face 5: {1,3,4,6}
    adjacent[5][1] = adjacent[5][3] = adjacent[5][4] = adjacent[5][6] = true;
    // Face 6: {2,3,4,5}
    adjacent[6][2] = adjacent[6][3] = adjacent[6][4] = adjacent[6][5] = true;
    
    testcase {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        // DP array: dp[i][j] = min changes to make sequence up to i valid, ending with face j
        const int INF = 1e9;
        vector<vector<int>> dp(n, vector<int>(7, INF));
        
        // First element: we can keep it or change it
        for(int j = 1; j <= 6; j++) {
            dp[0][j] = (a[0] == j) ? 0 : 1;
        }
        
        // Fill DP
        for(int i = 1; i < n; i++) {
            for(int curr = 1; curr <= 6; curr++) {
                // Try all possible previous faces
                for(int prev = 1; prev <= 6; prev++) {
                    // Check if prev and curr are adjacent
                    if(adjacent[prev][curr]) {
                        // Cost to have current face = curr
                        int cost = (a[i] == curr) ? 0 : 1;
                        dp[i][curr] = min(dp[i][curr], dp[i-1][prev] + cost);
                    }
                }
            }
        }
        
        // Find minimum in last position
        int ans = INF;
        for(int j = 1; j <= 6; j++) {
            ans = min(ans, dp[n-1][j]);
        }
        
        cout << ans << "\n";
    }
    return 0;
}