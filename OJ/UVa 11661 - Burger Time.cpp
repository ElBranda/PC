#include <iostream>

using namespace std;

int main() {
    int L;
    
    while (cin >> L && L!=0) {
        char head;
        int c=20000003, minC=2000002;
        
        while (L--) {
            char l;
            
            cin >> l;
            
            if (l != '.') {
                if (l=='Z') minC=0;
                if (head!=l && c<minC) minC=c;
                head=l;
                c=0;
            }
            
            c++;
        }
        
        cout << minC << endl;
    }

    return 0;
}
