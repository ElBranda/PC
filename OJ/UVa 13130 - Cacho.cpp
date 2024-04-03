#include <iostream>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    while (t--) {
        int c;
        bool f = false;

        for (int i = 0; i < 5; i++) {
            cin >> n;

            f = (i!=0 && n!=c+1 ? true : f);

            c=n;
        }

        cout << (f ? "N" : "Y") << endl;
    }

    return 0;
}