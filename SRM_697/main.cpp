#include <iostream>
#include <algorithm>

using namespace std;

class TriangleMaking {
public:

    bool canForm(int a, int b, int c) {
        return a + b > c && a + c > b && b + c > a;
    }

    int maxPerimeter(int a, int b, int c) {

        while(!canForm(a, b, c)) {
            if(a > b && a > c) {
                a--;
            } else if(b > a && b > c) {
                b--;
            } else if(c > a && c > b) {
                c--;
            }
        }
        return a + b + c;
    }
};


int main()
{
    int a, b ,c;
    cin >> a >> b >> c;
    TriangleMaking tm;
    cout << tm.maxPerimeter(a, b, c);
    return 0;
}
