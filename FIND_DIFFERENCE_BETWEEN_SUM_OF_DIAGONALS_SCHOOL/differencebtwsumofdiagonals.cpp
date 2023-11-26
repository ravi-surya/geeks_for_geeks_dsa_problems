
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
     int diagonalSumDifference(int n, std::vector<std::vector<int>> Grid) {
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < n; i++) {
            sum1 += Grid[i][i];
            sum2 += Grid[i][n - 1 - i];
        }

        int diff = abs(sum1 - sum2);
        return diff;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        Solution ob;
        cout << ob.diagonalSumDifference(N, Grid1) << "\n";
    }
}
