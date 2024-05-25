#include <iostream>

using namespace std;

int main() {
    int T, n;
    
    cin >> T;
    
    while (T-- && cin >> n) {
        int instruc[n], robotPos=0;
        
        cin.ignore();
        
        for (int i = 0; i < n; i++) {
            string move;
            int pos;
            
            getline(cin, move);
            
            if (move == "RIGHT") pos=1;
            else if (move == "LEFT") pos=-1;
            else pos=instruc[stoi(move.substr(8))-1];
            
            robotPos+=pos;
            
            instruc[i] = pos;
        }
        
        cout << robotPos << endl;
    }

    return 0;
}
