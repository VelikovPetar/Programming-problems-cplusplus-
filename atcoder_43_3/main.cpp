#include <iostream>

using namespace std;

long long int min(long long int a, long long int b) {
    return a < b ? a : b;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    int max_a = -100;
    int min_a = +100;
    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
        if(arr[i] > max_a) max_a = arr[i];
        if(arr[i] < min_a) min_a = arr[i];
    }
    long long int ans = 10000000;
    for(int target = min_a; target <= max_a; ++target) {
        long long int cost = 0;
        for(int i = 0; i < N; ++i) {
            cost += (arr[i] - target) * (arr[i] - target);
        }
        ans = min(ans, cost);
    }
    cout << ans;
    return 0;
}
