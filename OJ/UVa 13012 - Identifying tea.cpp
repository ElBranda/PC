#include <iostream>

using namespace std;

int main() {
    int t, n;

    while (cin >> t) {
        int cont=0;

        for (int i = 0; i < 5; i++) {
            cin >> n;

            if (n == t) cont++;
        }

        cout << cont << endl;
    }

    return 0;
}