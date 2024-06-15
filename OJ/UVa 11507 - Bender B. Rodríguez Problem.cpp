#include <iostream>

using namespace std;

int main() {
    int L;
    
    while (cin >> L && L!=0) {
        char axisH='+', H='x';
        char axisW, W;
        
        for (int i = 0; i < L-1; i++) {
            cin >> axisW >> W;
        
            if (axisW != 'N') {
                if (H == 'x') {
                    H = W;
                    
                    axisH = (axisH == '-' ? (axisW == '-' ? '+' : '-') : axisW);
                } else if (H == W) {
                    H = 'x';
                    axisH = (axisH == axisW ? '-' : '+');
                }
            }
        }
        
        cout << axisH << H << endl;
    }

    return 0;
}
