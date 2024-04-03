#include <iostream>

using namespace std;

int main() {
    int t;

    while (cin >> t && t != 0) {
        int cx, cy;

        cin >> cx >> cy;

        while (t--) {
            int px, py;

            cin >> px >> py;

            cout << (px-cx==0 || py-cy==0 ? "divisa" : (px-cx>0 && py-cy>0 ? "NE" : (px-cx<0 && py-cy>0 ? "NO" : (px-cx<0 && py-cy<0 ? "SO" : "SE")))) << endl;
        }
    }

    return 0;
}