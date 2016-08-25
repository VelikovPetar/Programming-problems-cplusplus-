#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>

using namespace std;

void generateMagic(int n) {
    int magicSquare[n][n];
    memset(magicSquare, 0, sizeof(magicSquare));
    int i = n / 2;
    int j = n - 1;
    for(int num = 1; num <= n* n;) {
        if(i == -1 && j == n) {
            i = 0;
            j = n - 2;
        } else {
            if(i < 0) {
                i = n - 1;
            }
            if(j == n) {
                j = 0;
            }
        }
        if(magicSquare[i][j] != 0) {
            i += 1;
            j -= 2;
            continue;
        } else {
            magicSquare[i][j] = num ++;
        }
        i --;
        j ++;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << magicSquare[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    generateMagic(N);
    return 0;
}
