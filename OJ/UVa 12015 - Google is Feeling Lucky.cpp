#include <iostream>

using namespace std;

int main() {
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        string url[10];
        int views[10], maxViews=0;
        
        for (int j = 0; j < 10; j++) {
            cin >> url[j] >> views[j];
            
            maxViews = max(maxViews, views[j]);
        }
        
        cout << "Case #" << i+1 << ":" << endl;
        
        for (int j = 0; j < 10; j++)
            if (views[j] == maxViews)
                cout << url[j] << endl;
    }

    return 0;
}
