#include <iostream>

using namespace std;

int main() {
    int T;
    
    cin >> T;
    
    while (T--) {
        string S, L="";
        int C, T=0;
        
        cin >> S;
        
        for (int i = 0; i < S.length(); i++) {
            L = S[i] + L;
            C = 0;
            
            if (L[0] == '/') {
                for (int j = 0; j < L.length(); j++) {
                    if (L[j] != '\\') {
                        C++;
                        L[j] = '_';
                    } else {
                        T += C;
                        L[j] = '_';
                        break;
                    }
                }
            }
        }
        
        cout << T << endl;
    }

    return 0;
}
