#include <iostream>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++) {
        bool f = false;

        for (int j = 0; j < 13; j++) {
            cin >> n;

            if (n==0) f=true;
        }

        cout << "Set #" << i+1 << ": " << (f ? "No" : "Yes") << endl;
    }

    return 0;
}