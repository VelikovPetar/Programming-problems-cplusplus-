#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class  DivisibleSetDiv2 {
public:
    string isPossible(vector<int> b) {
        int n = b.size();
        long long int P = 1 << n;
        cout << " P = " << P << endl;
        for(int i = 0; i < n; ++i) {
            cout << "b[" << i << "] = " << b[i] << endl;
            cout << "2 ^ b[i] = " << (1 << b[i]) << endl;
            long long int tmp = 1 << b[i];
            if(tmp % P != 0) {
                return "Impossible";
            }
        }
        return "Possible";
    }
};

int main()
{
    DivisibleSetDiv2 ds;
    vector<int> b;
    b.push_back(7);
    b.push_back(10);
     b.push_back(4);
      b.push_back(6);
       b.push_back(3);
    cout << ds.isPossible(b);
    return 0;
}
