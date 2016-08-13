#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> s;
    string input;
    cin >> input;
    for(int i = 0; i < input.length(); ++i) {
        if(input[i] == 'B') {
            if(!s.empty()) {
                s.pop();
            }
        } else {
            s.push(input[i]);
        }
    }
    stack<char> ans;
    while(!s.empty()) {
        ans.push(s.top());
        s.pop();
    }
    while(!ans.empty()) {
        cout << ans.top();
        ans.pop();
    }
    return 0;
}
