#include <iostream>

using namespace std;

int main() {
    int t, n, m, g, h;

    cin >> t;

    while (t--) {
        int sum=0;

        cin >> n;

        while (n--) {
            cin >> m >> g >> h;

            sum += m*h;
        }

        cout << sum << endl;
    }

    return 0;
}