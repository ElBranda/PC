#include <iostream>

using namespace std;

int main() {
    int n, allo=0;
    
    cin >> n;
    
    while (n--) {
        float l, w, d, we;
        
        cin >> l >> w >> d >> we;
        
        if (((l <= 56 && w <= 45 && d <= 25) || l+w+d <= 125) && we <= 7) {
            allo++;
            
            cout << 1 << endl;
        } else cout << 0 << endl; 
    }
    
    cout << allo << endl;

    return 0;
}
