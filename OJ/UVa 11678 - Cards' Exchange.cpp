#include <bits/stdc++.h>

using namespace std;

int main() {
    int At, Bt;
    vector<int> Ac, Bc, eq; 
    
    while (cin >> At >> Bt && (At!=0||Bt!=0)) {
        int sum=0;
        
        while (At--) {
            int n;
            
            cin >> n;
            
            if (find(Ac.begin(), Ac.end(), n) == Ac.end())
                Ac.push_back(n);
        }
        
        while (Bt--) {
            int n;
            
            cin >> n;
            
            if (find(Bc.begin(), Bc.end(), n) == Bc.end())
                Bc.push_back(n);
        }
        
        for (auto i : Bc) {
            if (find(Ac.begin(), Ac.end(), i) != Ac.end()) {
                eq.push_back(i);
            }
        }
            
        for (auto i: Ac){
            if (find(Bc.begin(), Bc.end(), i) != Bc.end()) {
                eq.push_back(i);
            }
        }
        
        for (auto i: eq) {
            auto it = find(Ac.begin(), Ac.end(), i);
            if (it != Ac.end()) {
              Ac.erase(it);
            }
            
            it = find(Bc.begin(), Bc.end(), i);
            if (it != Bc.end()) {
              Bc.erase(it);
            }
        }
        
        cout << min(Ac.size(), Bc.size()) << endl;
                
        Ac.clear();        
        Bc.clear();
        eq.clear();
    }

    return 0;
}
