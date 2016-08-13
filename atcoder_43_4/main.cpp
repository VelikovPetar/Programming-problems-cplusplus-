#include <iostream>

using namespace std;

/**
BRUTE FORCE SOLUTION, TLE ON 3 TEST CASES
*/
bool isUnbalanced(string s) {
    int freq[26];
    for(int i = 0; i < 26; ++i) {
        freq[i] = 0;
    }
    for(int i = 0; i < s.length(); ++i) {
        freq[s[i] - 'a'] ++;
    }
    for(int i = 0; i < 26; ++i) {
        //cout << "freq[" << i <<"] = " << freq[i] << endl;
        if(freq[i] > (s.length() / 2)) {
            return true;
        }
    }
    return false;
}

int main()
{
    string line;
    cin >> line;
    if(line.length() < 2) {
        cout << -1 << " " << -1;
        return 0;
    }
    bool flag = false;
    for(int l = 2; l <= line.length(); ++l) {
        flag = false;
        for(int i = 0; i < line.length() - l + 1; ++i) {
            string sub = line.substr(i, l);
            if(isUnbalanced(sub)) {
                cout << i + 1 << " " << i + l;
                flag = true;
                break;
            }
        }
        if(flag) {
            break;
        }
    }
    if(!flag) {
        cout << -1 << " " << -1;
    }
    return 0;
}
