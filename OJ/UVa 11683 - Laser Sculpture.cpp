#include <iostream>

using namespace std;

int main() {
    int A, C;
    
    while (cin >> A >> C && (A!=0 || C!=0)) {
        int line=0;
        
        while (C--) {
            int a;
            
            cin >> a;
            
            if (a < A) line+=A-a;
            
            A=a;
        }
        
        cout << line << endl;
    }

    return 0;
}
