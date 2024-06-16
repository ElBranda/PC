#include <iostream>

using namespace std;

int main() {
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int N, sumM=0, sumJ=0, mini;
        
        cin >> N;
        
        while (N--) {
            int n;
            
            cin >> n;
            
            sumM += (n / 30) * 10 + 10;
            sumJ += (n / 60) * 15 + 15;
            mini = min(sumM, sumJ);
        }
        
        cout << "Case " << i+1 << ": ";
        
        if (sumM == mini) cout << "Mile ";
        if (sumJ == mini) cout << "Juice ";
        
        cout << mini << endl;
    }

    return 0;
}
