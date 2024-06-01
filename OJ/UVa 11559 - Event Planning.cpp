#include <iostream>

using namespace std;

int main() {
    int N, B, H, W;
    
    while (cin >> N >> B >> H >> W) {
        int p, bed, bp=10001;
        
        for (int i = 0; i < H; i++) {
            cin >> p;
            
            for (int j = 0; j < W; j++) {
                cin >> bed;
                
                if (bed >= N) bp=min(bp, p);
            }
        }
        
        if (bp*N > B) {
            cout << "stay home" << endl;
        } else {
            cout << bp*N << endl;
        }
    }

    return 0;
}
