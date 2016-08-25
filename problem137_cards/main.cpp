#include <iostream>
#include <queue>

using namespace std;

void solve(priority_queue<int> even, priority_queue<int> odd) {
    if(even.size() > odd.size()) {
        while(!odd.empty()) {
            cout << even.top() << odd.top();
            even.pop();
            odd.pop();
        }
        cout << even.top();
    } else if(even.size() < odd.size()) {
        while(!even.empty()) {
            cout << odd.top() << even.top();
            even.pop();
            odd.pop();
        }
        cout << odd.top();
    } else {
        if(even.top() > odd.top()) {
            while(!odd.empty()) {
                cout << even.top() << odd.top();
                even.pop();
                odd.pop();
            }
        } else {
            while(!even.empty()) {
                cout << odd.top() << even.top();
                even.pop();
                odd.pop();
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        priority_queue<int> even;
        priority_queue<int> odd;
        for(int i = 0; i < N; ++i) {
            int n;
            cin >> n;
            if(n & 1) {
                odd.push(n);
            } else {
                even.push(n);
            }
        }
        solve(even, odd);
        cout << endl;
    }
    return 0;
}
