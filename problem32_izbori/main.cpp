#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int fav;
    cin >> fav;
    priority_queue<int> q;
    for(int i = 0; i < N - 1; ++i) {
        int vote;
        cin >> vote;
        q.push(vote);
    }
    int ans = 0;
    while(!q.empty() && fav <= q.top()) {
        int tmp = q.top();
        q.pop();
        fav++;
        tmp--;
        q.push(tmp);
        ans++;
    }
    cout << ans;
    return 0;
}
