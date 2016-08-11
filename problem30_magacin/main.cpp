#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool validPermutation(int perms[], vii conds, int N) {
    for(int i = 0; i < (int)conds.size(); ++i) {
        ii c = conds[i];
        int a = c.first;
        int b = c.second;
        int idx_a, idx_b;
        for(int j = 0; j < N; ++j) {
            if(perms[j] == a) {
                idx_a = j;
            }
            if(perms[j] == b) {
                idx_b = j;
            }
        }
        if(idx_a < idx_b) {
            return false;
        }
    }
    return true;
}

int weight(int perms[], vi weights, int N) {
    int sum = 0;
    for(int i = 0; i < N; ++i) {
        sum += (i * weights[perms[i]]);
    }
    return sum;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main()
{
    int N;
    cin >> N;
     vi weights(N);
    int perms[N];
    for(int i = 0; i < N; ++i) {
        int w;
        cin >> w;
        weights[i] = w;
        perms[i] = i;
    }
    int D;
    cin >> D;
    vii conds(D);
    for(int i = 0; i < D; ++i) {
        int f, s;
        cin >> f >> s;
        f--; s--;
        conds[i] = make_pair(f, s);
    }

    int m = 10000000;
    int ans[N];
    do {
        if(validPermutation(perms, conds, N)) {
            int w = weight(perms, weights, N);
            if(w < m) {
                m = w;
                for(int i = 0; i < N; ++i) {
                    ans[i] = perms[i];
                }
            }
        }
    } while(next_permutation(perms, perms + N));
    for(int i = 0; i < N; ++i) {
        cout << ans[i] + 1 << " ";
    }
    return 0;
}
