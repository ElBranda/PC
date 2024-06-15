#include <iostream>

using namespace std;

int main() {
    int B, N;
    
    while (cin >> B >> N && (B!=0||N!=0)) {
        int R[B];
        char output='S';
        
        for (int i = 0; i < B; i++) cin >> R[i];
        
        while (N--) {
            int D, C, V;
            
            cin >> D >> C >> V;
            
            R[D-1] -= V;
            R[C-1] += V;
        }
        
        for (int i = 0; i < B; i++)
            if (R[i] < 0) {
                output='N';
                break;
            }
        
        cout << output << endl;
    }

    return 0;
}
