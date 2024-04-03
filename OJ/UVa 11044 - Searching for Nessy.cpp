#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int x, y;

        cin >> x >> y;

        cout << (int)(x/3)*(int)(y/3) << endl;
    }

    return 0;
}