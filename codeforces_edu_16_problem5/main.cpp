#include <iostream>

using namespace std;

long long int min(long long int a, long long int b) {
    return a < b ? a : b;
}

long long int solve(int N, int singleCost, int copyCost) {
    long long int dp[N + 1];
    dp[1] = singleCost;
    for(int i = 2; i <= N; ++i) {
        if(i % 2 == 0) {
            dp[i] = min(dp[i - 1] + singleCost, dp[i / 2] + copyCost);
        } else {
            dp[i] = min(dp[i - 1], dp[i / 2 + 1] + copyCost) + singleCost;
        }
    }
    return dp[N];
}

int main()
{
    int N, singleCost, copyCost;
    cin >> N >> singleCost >> copyCost;
    cout << solve(N, singleCost, copyCost);
    return 0;
}
