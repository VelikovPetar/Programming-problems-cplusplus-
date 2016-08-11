#include <iostream>

using namespace std;

int main()
{
    int I, B;
    cin >> I >> B;
    int items[I];
    int boxes[B];
    for(int i = 0; i < I; ++i) {
        cin >> items[i];
    }
    for(int i = 0; i < B; ++i) {
        cin >> boxes[i];
    }
    int *item_ptr = items;
    int *box_ptr = boxes;
    int count = 0;
    while(item_ptr < items + I && box_ptr < boxes + B) {
        if(*item_ptr <= *box_ptr) {
            count++;
            item_ptr++;
        }
        box_ptr++;
    }
    cout << count;
    return 0;
}
