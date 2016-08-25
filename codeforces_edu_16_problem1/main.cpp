#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int col = s[0] - 'a' + 1;
    int row = s[1] - '0';
    int count = 0;
    if(row > 1) count ++;
    if(row < 8) count ++;
    if(col > 1) count ++;
    if(col < 8) count ++;
    if(col > 1 && row > 1) count ++;
    if(col > 1 && row < 8) count ++;
    if(col < 8 && row > 1) count ++;
    if(col < 8 && row < 8) count ++;
    cout << count;
    return 0;
}
