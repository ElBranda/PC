#include <iostream>

using namespace std;

int main() {
    string S;
    int iter=1;
    
    while (cin >> S) {
        int C;
        
        cin >> C;
        
        cout << "Case " << iter << ":" << endl;
        
        while (C--) {
            int i, j, mini, maxi;
            char c;
            string r="Yes";
            
            cin >> i >> j;
            
            mini = min(i, j);
            maxi = max(i, j);
            
            c = S[i];
            
            for (int k = mini; k <= maxi; k++) {
                if (S[k] != c) {
                    r = "No";
                    break;
                }
            }
            
            cout << r << endl;
        }
        
        iter++;
    }

    return 0;
}
